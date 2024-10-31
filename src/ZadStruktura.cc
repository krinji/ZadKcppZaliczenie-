#include "ZadStruktura.h"
#include "ZadKcpp.h"
#include <iostream>

Pracownik::Pracownik(std::string i, int ident) : imie(i), id(ident) {}

void ZadKcpp::ZadStruktura() {
    Osoba osoba;

    osoba.imie = "Jan Kowalski";
    osoba.wiek = 30;

    std::cout << "Imię: " << osoba.imie << ", Wiek: " << osoba.wiek << std::endl;

    osoba.wiek = 31;
    std::cout << "Zaktualizowany wiek: " << osoba.wiek << std::endl;

    Pracownik pracownik("Alicja", 1001);
    std::cout << "Imię pracownika: " << pracownik.imie << ", ID: " << pracownik.id << std::endl;
}

