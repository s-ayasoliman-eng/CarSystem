#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <vector>
#include <string>
#include "car.h"
#include "Customer.h"

using namespace std;

class FileManager {
public:
    void saveCars(vector<car> cars, string filename);
    void loadCars(vector<car>& cars, string filename);
    void saveCustomers(vector<Customer> customers, string filename);
    void loadCustomers(vector<Customer>& customers, string filename);
};

#endif // FILEMANAGER_H