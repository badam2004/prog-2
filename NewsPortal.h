#ifndef NEWSPORTAL_H
#define NEWSPORTAL_H

#include <iostream>
#include <fstream>
#include <memory>
#include <vector>

#include "Article.h"
#include "Content.h"
#include "User.h"


class NewsPortal {
    std::vector<std::unique_ptr<Content>> contents;
    std::vector<User> users;
public:
    void addContent(std::unique_ptr<Content> content) {
        contents.push_back(std::move(content));
    }

    void addUser(User user) {
        users.push_back(std::move(user));
    }

    void displayAll() const {
        for (const auto& content : contents) {
            content->display();
            std::cout << "---------------\n";
        }
    }

    void searchByAuthor(const std::string& author) const {
        std::cout << "Keresés szerző szerint: " << author << "\n";
        for (const auto& content : contents) {
            if (auto* article = dynamic_cast<Article*>(content.get())) {
                if (article->getAuthor() == author) {
                    article->display();
                }
            }
        }
    }
};

#endif //NEWSPORTAL_H