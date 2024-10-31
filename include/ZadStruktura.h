#ifndef ZADSTRUKTURA_H
#define ZADSTRUKTURA_H

#include <string>

struct Osoba {
    std::string imie;
    int wiek;
};

struct Pracownik {
    std::string imie;
    int id;
    Pracownik(std::string i, int ident);
};

#endif // ZADSTRUKTURA_H

