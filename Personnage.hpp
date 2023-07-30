
#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <string.h>
#include <iostream>

class Personnage {

 public:
    Personnage();
    Personnage(int nomArme);
    ~Personnage();
    int m_getvie() const; 
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
private:
    int m_vie;
    int m_degats;
};

#endif