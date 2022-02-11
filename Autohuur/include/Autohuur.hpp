#include <string>
#include "Auto.hpp"
#include "Klant.hpp"

using std::string;

class Autohuur
{
    private:
    int aantal_dagen;

    public:

    Autohuur(Auto auto, Klant huurder, int dagen);
    
    void set_aantal_dagen(int dagen);
    void set_gehuurde_auto(Auto auto);
    void set_huurder(Klant huurder);
    
    string get_gehuurde_auto();
    string get_huurder();
    
    double totaalprijs();
    string to_string();
    


}; 