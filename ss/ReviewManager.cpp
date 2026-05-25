#include "ReviewManager.h"
#include <iostream>

using namespace std;

void ReviewManager::addReview(car& c, string name, string text, int r) {
    if (Review::validateRating(r)) {
        Review rev(name, text, r);
        c.addReview(rev);
    }
}

void ReviewManager::showReviews(car& c) {
    for (auto r : c.getReviews()) {
        cout << r.getCustomerName() << ": " << r.getRating() << "/5\n";
        cout << r.getComment() << "\n";
    }
}

double ReviewManager::calculateRating(car& c) {
    auto reviews = c.getReviews();

    if (reviews.empty()) return 0;

    double sum = 0;

    for (auto r : reviews)
        sum += r.getRating();

    return sum / reviews.size();
}