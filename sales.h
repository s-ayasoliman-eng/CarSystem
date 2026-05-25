#pragma once

#include <vector>
#include "car.h"

using namespace std;

class sales
{
private:
    vector<car> cars;
    vector<int> salesCount;


public:
    void addCar(car c, int sold);

    car getBestSellingCar();
    void loadSales(string filename);
    void saveSales(string filename);
};