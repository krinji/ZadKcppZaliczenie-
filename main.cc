#include <iostream>
#include "include/ZadKcpp.h"
#include "include/ZadPrzykladKlasy.h"
#include "include/ZadZwracanie.h"
#include "include/ZadOperatoryPrzypisania.h"
#include "include/ZadParzysta.h"
#include "include/ZadStruktura.h"

int main() {
    ZadKcpp zad;
    int wybor;

    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Zadanie 1: ZadPrzykladKlasy - Prosty przykład klasy\n";
        std::cout << "2. Zadanie 2: ZadZwracanie - Funkcje zwracające na różne sposoby\n";
        std::cout << "3. Zadanie 3: ZadOperatoryPrzypisania - Przykłady operatorów\n";
        std::cout << "4. Zadanie 4: ZadParzysta - Sprawdzenie parzystości liczby\n";
        std::cout << "5. Zadanie 5: ZadStruktura - Praca ze strukturami\n";
        std::cout << "0. Wyjście\n";
        std::cout << "Wybierz opcję: ";

        std::cin >> wybor;

        switch (wybor) {
            case 1:
                zad.ZadPrzykladKlasy();
                break;
            case 2:
                zad.ZadZwracanie();
                break;
            case 3:
                zad.ZadOperatoryPrzypisania();
                break;
            case 4:
                zad.ZadParzysta();
                break;
            case 5:
                zad.ZadStruktura();
                break;
            case 0:
                std::cout << "Zamykanie programu...\n";
                break;
            default:
                std::cout << "Nieprawidłowy wybór. Spróbuj ponownie.\n";
        }

    } while (wybor != 0);

    return 0;
}

