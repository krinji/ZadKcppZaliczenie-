#ifndef ZADPRZYKLADKLASY_H
#define ZADPRZYKLADKLASY_H

#include <string>

class Samochod {
private:
    std::string marka;
    std::string model;
    int rok;
public:
    Samochod(std::string m, std::string mo, int r);
    void wyswietlInformacje();
};

#endif // ZADPRZYKLADKLASY_H

