#include <string>
#include "include/klant.hpp"

Klant::Klant(std::string naam)
{
    this->naam = naam;
};

double Klant::get_korting()
{
    return kortings_percentage;
}


void Klant::set_korting(double p)
{
   return percentage = p;
}