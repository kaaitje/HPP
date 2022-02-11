#include <string>
using std::string;

class Auto
{
private:
    std::string type;
    double prijs_per_dag;

public:
    Auto(std::string type, double prijs_per_dag);
    void set_prijs_per_dag(double percentage);
    string get_prijs_per_dag();
    string to_string();

};