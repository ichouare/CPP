// pointer : is integer store  memory address
// 0 || NULL is invalid memory address
// nullptr : keyword represents a null pointer value
// c++ sensible a case
// variable const "type const name(value)"
// #include <cmath> biblio of math functions
 //int* const a = new int // pointer is const you can't modify how it is pointed to but you can change the content

#include "./Personnage.hpp"


using namespace std;

int main()
{
   Personnages issam(1254, "pick"); // create 2 object of the type Personnage
   Personnages hamza(144,"hamza"); // create 2 object of the type Personnage

    issam.display();
    hamza.display();
    //cout << issam.m_vie << endl;
    // issam.changerArme("charger l'arme", 50);
    // issam.attaquer(David);
    // issam.attaquer(issam);

}