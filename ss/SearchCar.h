#pragma once

#include <vector>
#include "car.h"

using namespace std;

class SearchCar {
public:
    vector<car> searchByName(vector<car>& cars, string name);
    vector<car> searchByBrand(vector<car>& cars, string brand);
};