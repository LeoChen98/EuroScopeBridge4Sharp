#include "pch.h"
#include "CPipeClient.h"
#include <thread>
#include <tchar.h>

CBridgePlugin::CPipeClient::CPipeClient(CBridgePlugin* MyPlugin) {
	gpMyPlugin = MyPlugin;

	int retry = -1;
ReConnect:
	retry++;
	if (retry > 3) goto ConnectionFailure;
	{
		bool ret = WaitNamedPipe("\\\\.\\Pipe\\PrfLauncherUpPipe",
			150);
		if (!ret)
		{
			goto ReConnect;
		}
		ret = WaitNamedPipe("\\\\.\\Pipe\\PrfLauncherDownPipe",
			150);
		if (!ret)
		{
			goto ReConnect;
		}

		hUpPipe = CreateFile("\\\\.\\Pipe\\PrfLauncherUpPipe",
			GENERIC_READ | GENERIC_WRITE,
			0,
			NULL,
			OPEN_EXISTING,
			FILE_ATTRIBUTE_NORMAL,
			NULL);
		if (hUpPipe == INVALID_HANDLE_VALUE)
		{
			goto ReConnect;
		}

		hDownPipe = CreateFile("\\\\.\\Pipe\\PrfLauncherDownPipe",
			GENERIC_READ | GENERIC_WRITE,
			0,
			NULL,
			OPEN_EXISTING,
			FILE_ATTRIBUTE_NORMAL,
			NULL);
		if (hDownPipe == INVALID_HANDLE_VALUE)
		{
			goto ReConnect;
		}

		auto r = [&]() {
			while (true)
			{
				DWORD dwBytesRead = 0;
				char* buffer = (char*)malloc(512);
				bool ret = ReadFile(hDownPipe, buffer, 512, &dwBytesRead, NULL);
				if (ret) {
					char* tbuffer = new char[dwBytesRead + 1];
					strncpy_s(tbuffer, dwBytesRead + 1, buffer, dwBytesRead);
					OnReceived(tbuffer);
				}
				Sleep(1000);
			}
		};

		thread th_read(r);
		th_read.detach();

		SendLine(MY_PLUGIN_HELLOVERSIONSTRING.c_str());
		return;
	}
ConnectionFailure:
	gpMyPlugin->DisplayUserMessage("message", "EuroScopeBridge4Sharp", string("Pipe server connection fail.").c_str(), true, true, false, true, false);
}

CBridgePlugin::CPipeClient::~CPipeClient() {
	Send("\0");

	CloseHandle(hUpPipe);
	CloseHandle(hDownPipe);
}

void CBridgePlugin::CPipeClient::Send(const char* data) {
	DWORD dwBytesWritten = 0;
	DWORD size = strlen(data) + 1;
	bool ret = true;
	if (size > 0)
	{
		ret = WriteFile(hUpPipe, data,
			size, &dwBytesWritten, NULL);
	}
}

void CBridgePlugin::CPipeClient::SendLine(const char* data) {
	Send((std::string(data) + "\r\n").c_str());
}

void CBridgePlugin::CPipeClient::OnReceived(const char* data) {
	string tmp = string(data);
	int x = 0, ex = 0;
	for (int i = 0; i < 3; i++) {
		ex = x + 1;
		x = tmp.find("|", x + 1);
		if (i == 0 && tmp.substr(0, x) != "EuroScopeBridge4Sharp") {
			return;
		}

		if (i == 1) {
			if (tmp.substr(ex, x - ex) == "HostVersion") {
				string ver;
				ver = tmp.substr(x + 1, tmp.length() - x);
				gpMyPlugin->DisplayUserMessage("message", "EuroScopeBridge4Sharp", string("PrfLauncher host version " + ver + " connected.").c_str(), true, true, false, true, false);
			}
		}
	}
}