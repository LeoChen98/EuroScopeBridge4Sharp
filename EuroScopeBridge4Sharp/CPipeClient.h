#include "CBridgePlugin.h"
#include <iostream>
#include <thread>



class CBridgePlugin::CPipeClient
{
private:
	CBridgePlugin* gpMyPlugin;
	HANDLE hUpPipe,hDownPipe;

	void Send(const char* data);

public:
	CPipeClient(CBridgePlugin* MyPlugin);

	~CPipeClient();

	void SendLine(const char* data);

	void OnReceived(const char* data);
};

