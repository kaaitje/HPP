#include <string>
#include <vector>
#include "include/game.hpp"

using std::string, std::vector;

class Persoon
{
    private:
    vector<Game> games;
    std::string naam;
    float budget;
     
    public:
    Persoon(vector<Game>games, string naam, float budget);

    vector<Game> get_games();
    string get_naam();
    float get_budget();

    void set_games(vector<Game> game);
    void set_naam(string naam);
    void set_budget(float budget);


    string koop();
    string verkoop();
};