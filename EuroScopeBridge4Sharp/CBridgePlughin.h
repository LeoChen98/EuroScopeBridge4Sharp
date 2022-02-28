#pragma once
#include "EuroScopePlugIn.h"
#include <string>

using namespace std;

const string MY_PLUGIN_NAME = "EuroScopeBridge4Sharp";
const string MY_PLUGIN_VERSION = "0.0.0.0";
const string MY_PLUGIN_DEVELOPER = "Leo Chen";
const string MY_PLUGIN_COPYRIGHT= "GPL v3 lisence, Copyrights (c) 2022 zhangbudademao.com, all rights reserved.";

class CBridgePlughin :
    public EuroScopePlugIn::CPlugIn
{
public:

    CBridgePlughin();

    virtual ~CBridgePlughin();
};

