#include "sales.h"

void sales::addCar(car c, int sold)
{
    cars.push_back(c);
    salesCount.push_back(sold);
}

car sales::getBestSellingCar()
{
    if (cars.empty()) {
        return car();
    }

    int bestIndex = 0;

    for (int i = 1; i < salesCount.size(); i++) {

        if (salesCount[i] > salesCount[bestIndex]) {
            bestIndex = i;
        }
    }

    return cars[bestIndex];
}

