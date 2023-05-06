#ifndef ARME_H
#define ARME_H

#include <iostream>
#include <string>

class Arme
{
    //attributes
    std::string m_name;
    int m_degats;


    //methode 
    public: 
    Arme();// contucor non parametrise
    Arme(std::string name, int degats); //constructor with parmeters;
    void changer(std::string name, int degats);
    void affcher() const; //method const cant't change vars

};

#endif