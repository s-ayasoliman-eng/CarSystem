#pragma once

#include <string>
using namespace std;

class Review {
private:
    string customerName;
    string comment;
    int rating;

public:
    Review(string name, string text, int r);

    string getCustomerName() const;
    string getComment() const;
    int getRating() const;

    static bool validateRating(int r);
};