#include "User.h"

User::User(string u, string p) {
    username = u;
    password = p;
}

bool User::login(string u, string p) {
    return (username == u && password == p);
}

void User::logout() {
    
}

string User::getUsername() {
    return username;
}

string User::getPassword() {
    return password;
}
