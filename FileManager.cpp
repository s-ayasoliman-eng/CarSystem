#include "FileManager.h"
#include <fstream>

using namespace std;

void FileManager::saveCars(vector<car> cars, string filename) {
    ofstream out(filename);

    for (car c : cars) {
        out << c.getName() << endl;
        out << c.getBrand() << endl;
        out << c.getPrice() << endl;
    }

    out.close();
}

void FileManager::loadCars(vector<car>& cars, string filename) {
    ifstream in(filename);
    if (!in.is_open()) return;

    string name, brand;
    double price;

    while (getline(in, name)) {
        if (name.empty()) continue;
        if (!getline(in, brand)) break;
        if (!(in >> price)) break;
        in.ignore(1000, '\n');

        cars.push_back(car(name, brand, price));
    }

    in.close();
}

void FileManager::saveCustomers(vector<Customer> customers, string filename) {
    ofstream out(filename);

    for (Customer c : customers) {
        out << c.getUsername() << endl;
        out << c.getPassword() << endl;
    }

    out.close();
}

void FileManager::loadCustomers(vector<Customer>& customers, string filename) {
    ifstream in(filename);
    if (!in.is_open()) return;

    string username, password, role;

    while (getline(in, username)) {
        if (username.empty()) continue;
        if (!getline(in, password)) break;
        getline(in, role); 

        customers.push_back(Customer(username, password));
    }

    in.close();
}