#pragma once

#include <vector>
#include <string>
#include "Review.h"

using namespace std;

class car {
private:
    string name;
    string brand;
    double price;

    vector<string> colors;

    vector<Review> reviews;

    bool isAvailable;

    vector<string> pros;
    vector<string> cons;

public:
    car();
    car(string n, string b, double p);

    string getName();
    string getBrand();
    double getPrice();

    bool getIsAvailable();

    vector<Review> getReviews();

    vector<string> getPros();
    vector<string> getCons();

    void setColors(vector<string> c);
    void setAvailability(bool a);
    void setPros(vector<string> p);
    void setCons(vector<string> c);

    void displaySpecs();
    void displayColors();

    void addReview(Review r);
};