#include <string>
#include "include/Auto.hpp"

Auto:: Auto(std::string type, double prijs_per_dag)
{
    this->type = type;
    this->prijs_per_dag = prijs_per_dag;
}

void Auto::set_prijs_per_dag(double p)
{
    double percentage = p;
}  

std::string Auto::get_prijs_per_dag()
{
    return "PRIJS: " + std::to_string(prijs_per_dag);
}