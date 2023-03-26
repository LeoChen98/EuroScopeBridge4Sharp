#pragma once
#include "EuroScopePlugIn.h"
#include <string>

using namespace std;

const string MY_PLUGIN_NAME = "EuroScopeBridge4Sharp";
const string MY_PLUGIN_VERSION = "0.1.2.2";
const string MY_PLUGIN_DEVELOPER = "Leo Chen";
const string MY_PLUGIN_COPYRIGHT= "GPL v3 lisence, Copyrights (c) 2022 zhangbudademao.com, all rights reserved.";
const string MY_PLUGIN_HELLOVERSIONSTRING = "EuroScopeBridge4Sharp|Version|" + MY_PLUGIN_VERSION;

class CBridgePlugin :
    public EuroScopePlugIn::CPlugIn
{
private:
    class CListener;

    class CPipeClient;

public:

    CBridgePlugin();

    virtual ~CBridgePlugin();

    CListener* pListener;

    CPipeClient* pPipeClient;

    void OnRadarTargetPositionUpdate(EuroScopePlugIn::CRadarTarget RadarTarget);

    void OnAirportRunwayActivityChanged(void);

    bool OnCompileCommand(const char* sCommandLine);
};

