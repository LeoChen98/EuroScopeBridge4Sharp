#pragma once
#include "EuroScopePlugIn.h"


#define MY_PLUGIN_NAME      "EuroScopeBridge4Sharp"
#define MY_PLUGIN_VERSION   "0.0.0.0"
#define MY_PLUGIN_DEVELOPER "Leo Chen"
#define MY_PLUGIN_COPYRIGHT "GPL v3"

class CBridgePlughin :
    public EuroScopePlugIn::CPlugIn
{
public:

    CBridgePlughin();

    virtual ~CBridgePlughin();
};

