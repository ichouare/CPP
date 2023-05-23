#ifndef PERSONNAGE_H
#define PERSONNAGE_H


#include <iostream>
#include <string>
#include "Arme.hpp"



class Personnages 
{
    private :
    int m_vie;
    int m_mana;
    std::string m_nomArme;
    int m_degatsArme;
    Arme m_Arme;
    // Méthodes
    public :
        Personnages(int ma_vie,std::string name) ;//constructor
        ~Personnages(); //deconstructor
        void recevoirDegats(int nbDegats);
        void attaquer(Personnages &cible);
        void boirePotionDeVie(int quantitePotion);
        void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
        bool estVivant();
        void display();
        bool estEgal(Personnages &cible) const;
};

#endif