#include <string>
#include<iostream>
#include "include/Auto.hpp"
#include "include/Klant.hpp"
#include "include/Autohuur.hpp"
using std::cout, std::endl;

int main()
{
    Klant k("Mijnheer de Vries");
    k.set_korting(10.0);
    Auto a1("Peugeot 207", 50);
    Autohuur ah1(a1, k, 4);
    cout << "Eerste autohuur:" << ah1 << endl;
    cout << endl;
    
    Auto a2("Ferrari", 3500);
    Autohuur ah2(a1, k, 10);
    ah2.set_gehuurde_auto(a2);
    ah2.set_aantal_dagen(1);
    cout << "Tweede autohuur: " << ah2 << endl;
    cout << endl;
    
    cout << "Gehuurd: " << ah1.get_gehuurde_auto() << endl;
    cout << "Gehuurd: " << ah2.get_gehuurde_auto() << endl;
    
    return 0;
}