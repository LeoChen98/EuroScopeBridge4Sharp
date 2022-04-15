#include "pch.h"
#include "CListener.h"
#include "CPipeClient.h"



CBridgePlugin::CListener::CListener(CBridgePlugin* MyPlugin) {
	gpMyPlugin = MyPlugin;
}

CBridgePlugin::CListener::~CListener() {

}

void CBridgePlugin::CListener::OnRadarTargetPositionUpdate(CRadarTarget RadarTarget) {
	CFlightPlan tmpFp = RadarTarget.GetCorrelatedFlightPlan();
	if (tmpFp.GetTrackingControllerIsMe()) {
		CFlightPlanData tmpFpd = tmpFp.GetFlightPlanData();
		//cout << "EuroScopeBridge4Sharp|ACFTUnderControl|" << tmpFp.GetCallsign() << "/" << tmpFpd.GetOrigin() << "/" << tmpFpd.GetDestination() << endl;
		gpMyPlugin->pPipeClient->SendLine((string("EuroScopeBridge4Sharp|ACFTUnderControl|") + tmpFp.GetCallsign() + "/" + tmpFpd.GetOrigin() + "/" + tmpFpd.GetDestination()).c_str());
#ifdef _DEBUG
		//gpMyPlugin->DisplayUserMessage("message", "EuroScopeBridge4Sharp", string("EuroScopeBridge4Sharp|ACFTUnderControl|" + string(tmpFp.GetCallsign()) + "/" + tmpFpd.GetOrigin() + "/" + tmpFpd.GetDestination()).c_str(), true, true, false, true, false);

#endif
	}
}


void CBridgePlugin::CListener::OnAirportRunwayActivityChanged(void) {
	EuroScopePlugIn::CSectorElement airport = gpMyPlugin->SectorFileElementSelectFirst(EuroScopePlugIn::SECTOR_ELEMENT_AIRPORT);

	stringstream ss;

	ss << "EuroScopeBridge4Sharp|AirportsACTIVE|";

	while (airport.IsValid()) {
		if (airport.IsElementActive(true) || airport.IsElementActive(false)) {
			ss << airport.GetName() << "/";
			
		}

		airport = gpMyPlugin->SectorFileElementSelectNext(airport, EuroScopePlugIn::SECTOR_ELEMENT_AIRPORT);
	}

	string s = ss.str();

	if (s.find_last_of("/") == s.length() - 1) {
		s = s.substr(0, s.length() - 1);
	}

	gpMyPlugin->pPipeClient->SendLine(s.c_str());
	gpMyPlugin->DisplayUserMessage("message", "EuroScopeBridge4Sharp", s.c_str(), true, true, false, true, false);
}

