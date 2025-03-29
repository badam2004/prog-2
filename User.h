#ifndef USER_H
#define USER_H

#include <iostream>
#include <fstream>


class User {
    std::string username;
    std::string role; // "reader", "author", "admin"
public:
    User(std::string name, std::string r) : username(std::move(name)), role(std::move(r)) {}

    bool canPost() const { return role == "author" || role == "admin"; }
    bool canComment() const { return true; }
    bool canModify() const { return role == "admin";}
    bool canDelete() const { return role == "admin";}
    void showDashboard() const {
        std::cout << username << " irányítópultja (" << role << ")\n";
    }
};

#endif //USER_H