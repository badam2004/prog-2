#ifndef COMMENT_H
#define COMMENT_H

#include <iostream>
#include <fstream>
#include "Content.h"
#include "Article.h"

class Comment : public Content {
    std::string text;
    int userId;
public:
    Comment(std::string t, int uid) : text(std::move(t)), userId(uid) {}
    Comment(std::string t, int uid, int id) : text(std::move(t)), userId(id) {}

    void display() const override {
        std::cout << "Komment (#" << userId << "): " << text << "\n";
    }

    std::string getType() const override { return "Komment"; }
};
    int getArticleId() const {return ArticleId; }

#endif //COMMENT_H