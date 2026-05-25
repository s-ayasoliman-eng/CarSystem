#include "ApplicationManager.h"

#include <iostream>
#include <vector>

#include "UI.h"
#include "car.h"
#include "SearchCar.h"
#include "ReviewManager.h"
#include "CarFeatures.h"
#include "sales.h"
#include "FileManager.h"

using namespace std;

void ApplicationManager::run()
{
    UI ui;

    vector<car> cars;

    SearchCar search;
    ReviewManager reviewManager;
    CarFeatures features;
    sales salesSystem;
    FileManager fileManager;

    fileManager.loadCars(cars, "cars.txt");
    vector<Customer> customers;
    fileManager.loadCustomers(customers, "users.txt");

    string username, password;

    while (true) {
        int choice = ui.MainMenu();

        if (choice == 1) {
            ui.LoginMenu(username, password);
            
            bool loggedIn = false;
            for (auto& cust : customers) {
                if (cust.getUsername() == username && cust.getPassword() == password) {
                    loggedIn = true;
                    break;
                }
            }

            if (loggedIn) {
                ui.PrintMessage("Login successful! Welcome " + username);
                while (true) {
                    int c = ui.CustomerMenu();
                    if (c == 1) {
                        cout << "\n--- Cars List ---\n";
                        for (auto& carObj : cars) {
                            carObj.displaySpecs();
                        }
                    }
                    else if (c == 2) {
                        cout << "\nBest Selling Car:\n";
                        if (!cars.empty()) {
                            salesSystem.addCar(cars[0], 50); 
                            salesSystem.addCar(cars[1], 80); 
                            salesSystem.getBestSellingCar().displaySpecs();
                        } else {
                            cout << "No cars available.\n";
                        }
                    }
                    else if (c == 3) {
                        cout << "\n--- Reviews ---\n";
                        for (auto& carObj : cars) {
                            cout << "Car: " << carObj.getName() << endl;
                            reviewManager.showReviews(carObj);
                        }
                    }
                    else if (c == 4) {
                        break;
                    }
                }
            } else {
                ui.PrintMessage("Login failed! Invalid username or password.");
            }
        }
        else if (choice == 2) {
            ui.RegisterMenu(username, password);
            customers.push_back(Customer(username, password));
            fileManager.saveCustomers(customers, "users.txt");
            ui.PrintMessage("Account created successfully!");
        }

        else if (choice == 3) {

            
            fileManager.saveCars(cars, "cars.txt");

            break;
        }
    }
}

