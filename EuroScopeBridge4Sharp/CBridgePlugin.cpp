#include "pch.h"
#include "CBridgePlugin.h"
#include "CConstInts.h"
#include <string>
#include "CListener.h"

CBridgePlugin :: CBridgePlugin(void) : CPlugIn(EuroScopePlugIn::COMPATIBILITY_CODE,
    MY_PLUGIN_NAME.c_str(),
    MY_PLUGIN_VERSION.c_str(),
    MY_PLUGIN_DEVELOPER.c_str(),
    MY_PLUGIN_COPYRIGHT.c_str())
{
    //Show loaded message
    DisplayUserMessage("message", "EuroScopeBridge4Sharp", string("Version " + MY_PLUGIN_VERSION + " loaded").c_str(), true, true, false, true, false);
    cout << "EuroScopeBridge4Sharp|Version|" << MY_PLUGIN_VERSION << endl;
    CConstInts::InitMap();
    pListener = new CBridgePlugin::CListener(this);

#ifdef _DEBUG
    

  

#endif

}

CBridgePlugin :: ~CBridgePlugin(void) {

}

void CBridgePlugin::OnRadarTargetPositionUpdate(EuroScopePlugIn::CRadarTarget RadarTarget) {
    pListener -> OnRadarTargetPositionUpdate(RadarTarget);
}