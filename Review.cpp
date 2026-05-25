#include "Review.h"

Review::Review(string name, string text, int r) {
    customerName = name;
    comment = text;

    if (validateRating(r)) rating = r;
    else rating = 1;
}

string Review::getCustomerName() const { return customerName; }

string Review::getComment() const { return comment; }

int Review::getRating() const { return rating; }

bool Review::validateRating(int r) {
    return (r >= 1 && r <= 5);
}