#include <string>

class Game
{
    private:
    std::string titel;
    float prijs;
    int release_jaar;
    int current_jaar;

    public:
    Game(std::string titel, float prijs, int release_jaar, int current_jaar);
    
    string get_titel();
    float get_prijs();
    int get_release_jaar();
    int get_current_jaar();

    void set_titel(string titel);
    void set_prijs(float prijs);
    void set_release_jaar(int release_jaar);
    void set_current_jaar(int current_jaar);

    float bereken_waarde();

}; 