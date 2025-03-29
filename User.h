#ifndef USER_H
#define USER_H

#include <iostream>
#include <fstream>

enum Role {
    READER, //0
    AUTHOR, //1
    ADMIN   //2
};

class User {
    std::string username;
    Role role; // "reader", "author", "admin"
public:
    User(std::string name, std::string r) : username(std::move(name)), role(std::move(r)) {}

    bool canPost() const { return role == Role::AUTHOR || role == Role::ADMIN; }
    bool canComment() const { return true; }
    bool canModify() const { return role == Role::ADMIN; ;}
    bool canDelete() const { return role == Role::ADMIN; ;}
    void showDashboard() const {
        std::cout << username << " irányítópultja (" << role << ")\n";
    }
};

#endif //USER_H