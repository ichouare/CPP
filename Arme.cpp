#include "./Arme.hpp"

using namespace std;
Arme::Arme()
{

}

Arme::Arme(string name, int degats)
{
    m_name = name;
    m_degats = degats;
}

void Arme::changer(string name, int degats)
{
    m_name = name;
    m_degats = degats;
}

void Arme::affcher() const {
    cout << m_name << "\t" << m_degats  << "\n";
}