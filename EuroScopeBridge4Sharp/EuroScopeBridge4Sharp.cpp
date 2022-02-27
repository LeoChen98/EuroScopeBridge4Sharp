// dllmain.cpp : 定义 DLL 应用程序的入口点。
#include "pch.h"
#include "EuroScopePlugIn.h"
#include "CBridgePlughin.h"

CBridgePlughin* gpMyPlugin = NULL;


//---EuroScopePlugInInit-----------------------------------------------

void    __declspec (dllexport)    EuroScopePlugInInit(EuroScopePlugIn::CPlugIn** ppPlugInInstance)
{
   

        // create the instance
        * ppPlugInInstance = gpMyPlugin = new CBridgePlughin();
}


//---EuroScopePlugInExit-----------------------------------------------

void    __declspec (dllexport)    EuroScopePlugInExit(void)
{

        // delete the instance
        delete gpMyPlugin;
}