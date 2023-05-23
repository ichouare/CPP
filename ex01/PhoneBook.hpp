# ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <string.h>
#include <iostream>
#include "Contact.hpp"

class Phonebook
{
    private :
   Contact m_contact[8];
   int m_numberofContact;
    public :
        Phonebook();
        void ADD();
        void SEARCH();
        void EXIT();
        void get_contact(int index) const;
        int get_index() const;
};


#endif