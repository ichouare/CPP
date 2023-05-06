#ifndef CONTACT_H
#define CONTACT_H


#include <string.h>
#include <iostream>
class Contact
{
    private:
        int m_index;
        std::string m_name;
        std::string m_secondName;
        std::string m_nickName;
        std::string m_phoneNumber;
    public:
        Contact();
        void get_name()const;
        void get_m_secondName()const;
        void get_m_nickName()const;
        void get_m_phoneNumber()const;

        void set_name(std::string name);
        void set_m_secondName(std::string sendName);
        void set_m_nickName(std::string nickName);
        void set_m_phoneNumber(std::string number);
};

#endif