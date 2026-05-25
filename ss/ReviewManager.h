#pragma once

#include "car.h"
#include <string>

using namespace std;

class ReviewManager {
public:
    void addReview(car& c, string name, string text, int r);
    void showReviews(car& c);
    double calculateRating(car& c);
};