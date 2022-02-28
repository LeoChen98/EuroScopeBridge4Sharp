#include "pch.h"
#include "CBridgePlughin.h"
#include "CConstInts.h"
#include <string>

using namespace std;


CBridgePlughin :: CBridgePlughin(void) : CPlugIn(EuroScopePlugIn::COMPATIBILITY_CODE,
    MY_PLUGIN_NAME.c_str(),
    MY_PLUGIN_VERSION.c_str(),
    MY_PLUGIN_DEVELOPER.c_str(),
    MY_PLUGIN_COPYRIGHT.c_str())
{
    //Show loaded message
    DisplayUserMessage("message", "EuroScopeBridge4Sharp", string("Version " + MY_PLUGIN_VERSION + " loaded").c_str(), true, true, false, true, false);

    CConstInts::InitMap();

#ifdef _DEBUG
    

  

#endif

}

CBridgePlughin :: ~CBridgePlughin(void) {

}