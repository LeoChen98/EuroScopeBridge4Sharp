#include "pch.h"
#include "CListener.h"



CBridgePlugin::CListener::CListener(CBridgePlugin* MyPlugin) {
	gpMyPlugin = MyPlugin;
}

CBridgePlugin::CListener::~CListener() {

}

void CBridgePlugin::CListener::OnRadarTargetPositionUpdate(CRadarTarget RadarTarget) {
	CFlightPlan tmpFp = RadarTarget.GetCorrelatedFlightPlan();
	if (tmpFp.GetTrackingControllerIsMe()) {
		CFlightPlanData tmpFpd = tmpFp.GetFlightPlanData();
		cout << "EuroScopeBridge4Sharp|ACFTUnderControl|" << tmpFp.GetCallsign() << "/" << tmpFpd.GetOrigin() << "/" << tmpFpd.GetDestination() << endl;

#ifdef _DEBUG
		//gpMyPlugin->DisplayUserMessage("message", "EuroScopeBridge4Sharp", string("EuroScopeBridge4Sharp|ACFTUnderControl|" + string(tmpFp.GetCallsign()) + "/" + tmpFpd.GetOrigin() + "/" + tmpFpd.GetDestination()).c_str(), true, true, false, true, false);

#endif
	}
}

