#include <string>
#include "include/game.hpp"
using std::string;

Game::Game(std::string titel, float prijs, int release_jaar, int current_jaar)
{
    this->titel = titel;
    this->prijs = prijs;
    this->release_jaar = release_jaar;
    this->current_jaar = current_jaar;
}
std::string Game::get_titel()
{
    return "titel:" + titel;
}
float Game::get_prijs()
{
    return prijs;
}
int Game::get_release_jaar()
{
    return release_jaar;
}
int Game::get_current_jaar()
{
    return current_jaar;
}
void Game::set_titel(string t)
{
    titel = t;
}
void Game::set_prijs(float p)
{
    prijs = p;
}
void Game::set_release_jaar(int rj)
{
    release_jaar = rj;
}
void Game::set_current_jaar(int cj)
{
    current_jaar = cj;
}

float Game::bereken_waarde()
{
    return prijs * 0.7 ^ (current_jaar - release_jaar);
}