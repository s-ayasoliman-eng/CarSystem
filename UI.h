#pragma once

#include <string>

class UI {
public:
    int MainMenu();
    void LoginMenu(std::string& u, std::string& p);
    void RegisterMenu(std::string& u, std::string& p);
    int CustomerMenu();
    void PrintMessage(std::string msg);
};