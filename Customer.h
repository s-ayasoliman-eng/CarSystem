#pragma once
#include "User.h"

class Customer : public User {
public:
    Customer(string u, string p);

    void customerOperations();
};