#include "pch.h"
#include "CBridgePlughin.h"


CBridgePlughin :: CBridgePlughin(void) : CPlugIn(EuroScopePlugIn::COMPATIBILITY_CODE,
    MY_PLUGIN_NAME,
    MY_PLUGIN_VERSION,
    MY_PLUGIN_DEVELOPER,
    MY_PLUGIN_COPYRIGHT)
{

#ifdef _DEBUG
    DisplayUserMessage("EuroScopeBridge4Sharp", "Version", MY_PLUGIN_VERSION, true, true, false, true, false);

#endif

}

CBridgePlughin :: ~CBridgePlughin(void) {

}