
#include "./Personnage.hpp"

using namespace std;

Personnages::Personnages(int ma_vie,string name)
{
    m_vie = ma_vie;
    m_mana = 100;
    m_nomArme = name;
   m_degatsArme = 10;
   m_Arme = Arme("benszima", 50);
}
Personnages::~Personnages()
{

}
void Personnages::recevoirDegats(int nbDegats)
{
    m_vie -= nbDegats;
    //On enlève le nombre de dégâts reçus à la vie du Personnages

    if (m_vie < 0) //Pour éviter d'avoir une vie négative
    {
        m_vie = 0; //On met la vie à 0 (cela veut dire mort)
    }
}

void Personnages::attaquer(Personnages &cible)
{
    cible.recevoirDegats(m_degatsArme);
    //On inflige à la cible les dégâts que cause notre arme
}

void Personnages::boirePotionDeVie(int quantitePotion)
{
    m_vie += quantitePotion;

    if (m_vie > 100) //Interdiction de dépasser 100 de vie
    {
        m_vie = 100;
    }
}

void Personnages::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{
    m_nomArme = nomNouvelleArme;
    m_degatsArme = degatsNouvelleArme;
}

bool Personnages::estVivant()
{
    return m_vie > 0;
};

void Personnages::display()
{
    //cout << m_name << endl;
    m_Arme.affcher();
}

bool Personnages::estEgal(Personnages const& cible) const 
{
    if(m_vie == cible.m_vie)
}