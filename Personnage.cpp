
#include "./Personnage.hpp"

// constructor used to initialize the attribute of objects with method "initialization lists" 
Personnage::Personnage():m_vie(100)
{
    // vide
}
// deconstructor 
Personnage::~Personnage()
{

}
// sucharge du constructor used when we need to initialize the attribute of objects with specific parameters
Personnage::Personnage(int vie) : m_vie(vie), m_degats(0)
{
 
}

int Personnage::m_getvie() const 
{
   return m_vie;
}

void Personnage::attaquer(Personnage &cible)
{
    cible.m_vie--;
}




void Personnage::boirePotionDeVie(int quantitePotion)
{
   m_degats = quantitePotion;
}