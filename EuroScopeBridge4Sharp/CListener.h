#include "CBridgePlugin.h"
#include <iostream>
#include "EuroScopePlugIn.h"


using namespace std;
using namespace EuroScopePlugIn;



class CBridgePlugin::CListener
{
private:
	CBridgePlugin* gpMyPlugin;

public:
	CListener(CBridgePlugin* MyPlugin);
	virtual ~CListener();

	virtual void OnRadarTargetPositionUpdate(CRadarTarget RadarTarget);
};




