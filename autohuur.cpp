#include <string>
#include "include/Auto.hpp"
#include "include/Klant.hpp"
#include "include/Autohuur.hpp"

Autohuur::Autohuur(Auto auto, Klant huurder, int aantal_dagen)
{
    this->Auto = Auto;
    this->huurder = Klant;
    this->aantal_dagen = aantal_dagen;
};


void Autohuur::set_aantal_dagen(int d)
{
    aantal_dagen = d;
}

void Autohuur::set_gehuurde_auto(auto a)
{
    Auto = a;
}

void Autohuur::set_huurder(Klant h)
{
    Klant = h;
}

std::string Autohuur::get_gehuurde_auto()
{
    return "AUTO: " + std::to_string(Auto);
}

std::string Autohuur::get_huurder()
{
    return "HUURDER: " + std::to_string(Klant);
}

std::string Autohuur::totaalprijs()
{
    return "BEREKENDE TOTAALPRIJS: " + std::to_string(prijs_per_dag * aantal_dagen - (prijs_per_dag * aantal_dagen * kortings_percentage));
}
