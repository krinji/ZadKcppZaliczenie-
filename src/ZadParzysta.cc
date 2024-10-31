#include "ZadParzysta.h"
#include "ZadKcpp.h"
#include <iostream>

void sprawdzParzystoscBitowo(int liczba) {
    if (liczba & 1) {
        std::cout << liczba << " jest nieparzysta (sprawdzenie bitowe)" << std::endl;
    } else {
        std::cout << liczba << " jest parzysta (sprawdzenie bitowe)" << std::endl;
    }
}

void sprawdzParzystoscModulo(int liczba) {
    if (liczba % 2 == 0) {
        std::cout << liczba << " jest parzysta (sprawdzenie modulo)" << std::endl;
    } else {
        std::cout << liczba << " jest nieparzysta (sprawdzenie modulo)" << std::endl;
    }
}

void sprawdzParzystoscWarunkowy(int liczba) {
    std::cout << liczba << " jest " << ((liczba % 2 == 0) ? "parzysta" : "nieparzysta") << " (operator warunkowy)" << std::endl;
}

void ZadKcpp::ZadParzysta() {
    int liczba;
    std::cout << "Podaj liczbę: ";
    std::cin >> liczba;

    sprawdzParzystoscBitowo(liczba);
    sprawdzParzystoscModulo(liczba);
    sprawdzParzystoscWarunkowy(liczba);
}

