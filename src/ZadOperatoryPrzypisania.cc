#include "ZadOperatoryPrzypisania.h"
#include "ZadKcpp.h"
#include <iostream>

void OperatoryArytmetyczne() {
    int a = 10, b = 3;
    std::cout << "Dodawanie: " << a + b << std::endl;
    std::cout << "Odejmowanie: " << a - b << std::endl;
    std::cout << "Mnożenie: " << a * b << std::endl;
    std::cout << "Dzielenie: " << a / b << std::endl;
    std::cout << "Modulo: " << a % b << std::endl;
}

void OperatoryPrzypisania() {
    int a = 10;
    std::cout << "Początkowe a: " << a << std::endl;
    a += 5;
    std::cout << "Po a += 5: " << a << std::endl;
    a -= 3;
    std::cout << "Po a -= 3: " << a << std::endl;
    a *= 2;
    std::cout << "Po a *= 2: " << a << std::endl;
    a /= 4;
    std::cout << "Po a /= 4: " << a << std::endl;
    a %= 3;
    std::cout << "Po a %= 3: " << a << std::endl;
}

void ZadKcpp::ZadOperatoryPrzypisania() {
    std::cout << "Operatory arytmetyczne:\n";
    OperatoryArytmetyczne();

    std::cout << "\nOperatory przypisania:\n";
    OperatoryPrzypisania();
}

