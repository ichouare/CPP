#ifndef PHONEBOOK_H
#define PHONEBOOK_H


#include <string.h>
#include <iostream>
#include "Contact.hpp"


class PhoneBook{
    
    public:
        PhoneBook();
        void ADD();
        void SEARCH();
        void EXIT();
        void set_index();
        int get_index() const;
    private:
    Contact m_contact[8];
    int m_counter;
};


#endif