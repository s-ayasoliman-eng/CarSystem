#include "CarFeatures.h"
#include "ReviewManager.h"
#include <iostream>

using namespace std;

void CarFeatures::compare(car& c1, car& c2) {
    ReviewManager rm;

    cout << "Price: " << c1.getPrice() << " | " << c2.getPrice() << endl;

    cout << "Rating: "
        << rm.calculateRating(c1)
        << " | "
        << rm.calculateRating(c2) << endl;
}

void CarFeatures::viewAvailability(car& c) {
    if (c.getIsAvailable())
        cout << c.getName() << " Available\n";
    else
        cout << c.getName() << " Out of stock\n";
}

void CarFeatures::viewProsCons(car& c) {
    cout << "Pros:\n";
    for (auto p : c.getPros())
        cout << "- " << p << endl;

    cout << "Cons:\n";
    for (auto c : c.getCons())
        cout << "- " << c << endl;
}