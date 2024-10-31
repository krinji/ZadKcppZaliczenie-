#include "ZadPrzykladKlasy.h"
#include "ZadKcpp.h"
#include <iostream>

Samochod::Samochod(std::string m, std::string mo, int r) : marka(m), model(mo), rok(r) {}

void Samochod::wyswietlInformacje() {
    std::cout << "Marka: " << marka << ", Model: " << model << ", Rok: " << rok << std::endl;
}

void ZadKcpp::ZadPrzykladKlasy() {
    Samochod mojSamochod("Toyota", "Corolla", 2020);
    mojSamochod.wyswietlInformacje();
}

