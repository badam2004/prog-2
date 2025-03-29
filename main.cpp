#include "Comment.h"
#include "NewsPortal.h"
#include "Article.h"
#include "User.h"

int main() {
    NewsPortal portal;

    // Tartalom hozzáadása (polimorfizmus)
    portal.addContent(std::make_unique<Article>(
        "Nyakatekerés, azaz az AI nem gyerekjáték.",
        "A németországi von Haus bárót holtnak nyilvánították!",
        "Kvariczovszki László"));

    portal.addContent(std::make_unique<Comment>(
        "Nagyon hasznos cikk!", 123));

    // Felhasználók
    portal.addUser(User("Olvasó1", "reader"));
    portal.addUser(User("Szerző1", "author"));

    // Tartalom megjelenítése
    portal.displayAll();

    // Keresés
    portal.searchByAuthor("Kvariczovszki László");

    return 0;
}
