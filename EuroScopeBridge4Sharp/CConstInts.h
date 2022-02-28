#include "pch.h"
#include <iostream>
#include <map>
#include <string>

using namespace std;

class CConstInts
{

public:
    static map<string, int> ConstIntsMap;

    static int GetValue(string var_name);
    static void InitMap();
};