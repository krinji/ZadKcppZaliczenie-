#include "ZadZwracanie.h"
#include "ZadKcpp.h"
#include <iostream>

int zwrocPrzezWartosc() {
    int a = 10;
    return a;
}

int& zwrocPrzezReferencje() {
    static int a = 20;
    return a;
}

int* zwrocPrzezWskaznik() {
    int* a = new int(30);
    return a;
}

int* zwrocTablice() {
    static int tablica[5] = {1, 2, 3, 4, 5};
    return tablica;
}

void ZadKcpp::ZadZwracanie() {
    std::cout << "Zwracanie przez wartość: " << zwrocPrzezWartosc() << std::endl;

    int& ref = zwrocPrzezReferencje();
    std::cout << "Zwracanie przez referencję: " << ref << std::endl;
    ref = 25;
    std::cout << "Zmodyfikowana referencja: " << zwrocPrzezReferencje() << std::endl;

    int* wsk = zwrocPrzezWskaznik();
    std::cout << "Zwracanie przez wskaźnik: " << *wsk << std::endl;
    delete wsk;

    int* tab = zwrocTablice();
    std::cout << "Zwracanie tablicy: ";
    for (int i = 0; i < 5; i++) {
        std::cout << tab[i] << " ";
    }
    std::cout << std::endl;
}

