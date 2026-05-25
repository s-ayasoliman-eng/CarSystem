#include "car.h"
#include <iostream>

using namespace std;

car::car() {
    isAvailable = true;
}

car::car(string n, string b, double p) {
    name = n;
    brand = b;
    price = p;
    isAvailable = true;
}

string car::getName() { return name; }

string car::getBrand() { return brand; }

double car::getPrice() { return price; }

bool car::getIsAvailable() { return isAvailable; }

vector<Review> car::getReviews() { return reviews; }

vector<string> car::getPros() { return pros; }

vector<string> car::getCons() { return cons; }

void car::setColors(vector<string> c) { colors = c; }

void car::setAvailability(bool a) { isAvailable = a; }

void car::setPros(vector<string> p) { pros = p; }

void car::setCons(vector<string> c) { cons = c; }

void car::displaySpecs() {
    cout << name << " | " << brand << " | " << price << endl;
}

void car::displayColors() {
    for (string c : colors)
        cout << c << " ";
    cout << endl;
}

void car::addReview(Review r) {
    reviews.push_back(r);
}