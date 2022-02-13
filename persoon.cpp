#include <string>
#include <vector>
#include "include/persoon.hpp"
using std::string;

Persoon::Persoon(vector<Game>games, string naam, float budget)
{   
    this->games = games;
    this->naam = naam;
    this->budget = budget;
}

vector<Game> Persoon::get_games()
{
    return games;
}
string Persoon::get_naam()
{
    return naam;
}
float Persoon:: get_budget()
{
    return budget;
}

void Persoon::set_games(vector<Game> g)
{
    games = g;
}
void Persoon::set_naam(string n)
{
    naam = n;
}
void Persoon::set_budget(float b)
{
    budget = b;
}

string Persoon::Koop()
{
    return 0;
}

string Persoon::verkoop()
{
    return 0;
}