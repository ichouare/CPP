# ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <string.h>
#include <iostream>
#include "Contact.hpp"

class Phonebook
{
    private :
   Contact m_contact[8];
    public :
        Phonebook();
        void ADD(std::string name, int index, std::string nameSecond , std::string nickname, std::string number);
        void SEARCH();
        void EXIT();
};


#endif