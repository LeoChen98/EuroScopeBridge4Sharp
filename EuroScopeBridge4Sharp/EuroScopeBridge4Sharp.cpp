// dllmain.cpp : 定义 DLL 应用程序的入口点。
#include "pch.h"
#include "EuroScopePlugIn.h"
#include "CBridgePlugin.h"

CBridgePlugin* gpMyPlugin = NULL;


//---EuroScopePlugInInit-----------------------------------------------

void    __declspec (dllexport)    EuroScopePlugInInit(EuroScopePlugIn::CPlugIn** ppPlugInInstance)
{
   

        // create the instance
        * ppPlugInInstance = gpMyPlugin = new CBridgePlugin();
}


//---EuroScopePlugInExit-----------------------------------------------

void    __declspec (dllexport)    EuroScopePlugInExit(void)
{
        //delete gpMyPlugin->pPipeClient;
        // delete the instance
        delete gpMyPlugin;
}