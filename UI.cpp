#include "UI.h"
#include <iostream>

using namespace std;

int UI::MainMenu() {
    int choice;

    cout << "\n========= CAR SYSTEM =========\n";
    cout << "1. Login\n2. Register\n3. Exit\n";
    cout << "Selection: ";
    cin >> choice;

    return choice;
}

void UI::LoginMenu(string& u, string& p) {
    cout << "\n--- LOGIN ---\n";

    cout << "Username: ";
    cin >> u;

    cout << "Password: ";
    cin >> p;
}

void UI::RegisterMenu(string& u, string& p) {
    cout << "\n--- REGISTER ---\n";

    cout << "Username: ";
    cin >> u;

    cout << "Password: ";
    cin >> p;
}

int UI::CustomerMenu() {
    int choice;

    cout << "\n--- CUSTOMER MENU ---\n";
    cout << "1. Show Cars\n";
    cout << "2. Best Selling Car\n";
    cout << "3. Show Reviews\n";
    cout << "4. Logout\n";
    cout << "Selection: ";

    cin >> choice;

    return choice;
}

void UI::PrintMessage(string msg) {
    cout << "\n[System]: " << msg << endl;
}