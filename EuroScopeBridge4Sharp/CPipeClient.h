#include "CBridgePlugin.h"
#include <iostream>
#include <thread>



class CBridgePlugin::CPipeClient
{
private:
	CBridgePlugin* gpMyPlugin;
	HANDLE hUpPipe,hDownPipe;

public:
	CPipeClient(CBridgePlugin* MyPlugin);

	~CPipeClient();

	void Send(const char* data);

	void SendLine(const char* data);

	void OnReceived(const char* data);
};

