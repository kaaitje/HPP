#include <string>
using std::string;

class Klant
{
    private:
    std::string naam;
    double kortings_percentage;

    public:
    
    Klant(std::string naam);
    
    void set_korting(double percentage);
    double get_korting();
    
    std::string to_string();


};