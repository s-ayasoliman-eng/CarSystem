#include "SearchCar.h"

vector<car> SearchCar::searchByName(vector<car>& cars, string name) {
    vector<car> result;

    for (car c : cars) {
        if (c.getName() == name)
            result.push_back(c);
    }

    return result;
}

vector<car> SearchCar::searchByBrand(vector<car>& cars, string brand) {
    vector<car> result;

    for (car c : cars) {
        if (c.getBrand() == brand)
            result.push_back(c);
    }

    return result;
}