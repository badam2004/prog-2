#ifndef COMMENT_H
#define COMMENT_H

#include <iostream>
#include <fstream>
#include "Content.h"

class Comment : public Content {
    std::string text;
    int userId;
public:
    Comment(std::string t, int uid) : text(std::move(t)), userId(uid) {}

    void display() const override {
        std::cout << "Komment (#" << userId << "): " << text << "\n";
    }

    std::string getType() const override { return "Komment"; }
};

#endif //COMMENT_H