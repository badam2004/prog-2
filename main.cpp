#include <cstdio>

#include "Comment.h"
#include "NewsPortal.h"
#include "User.h"
#include "Article.h"

int main() {
    NewsPortal portal;

    // Tartalom hozzáadása (polimorfizmus)
    portal.addContent(std::make_unique<Article>(
        "Polimorfizmus C++-ban",
        "A polimorfizmus fontos OOP elv...",
        "Bukovics Adam"));

    portal.addContent(std::make_unique<Comment>(
        "Nagyon hasznos cikk!", 123));

    // Felhasználók
    portal.addUser(User("Olvasó1", "reader"));
    portal.addUser(User("Szerző1", "author"));

    // Tartalom megjelenítése
    portal.displayAll();

    // Keresés
    portal.searchByAuthor("Bukovics Adam");

    return 0;
}
