#include "./Personnage.hpp"


int main()
{
    Personnage David , Issam(120);
    

    std::cout << "function output" << std::endl;
    David.attaquer(Issam);
    Issam.boirePotionDeVie(20);
    
    std::cout << David.m_getvie() << std::endl;

}