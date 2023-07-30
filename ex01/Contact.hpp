#ifndef Contact_H
#define Contact_H

#include <iostream>
#include <string.h>
#include "Contact.hpp"

class Contact 
{
    public:
    Contact();
    ~Contact();
    int  get_contactId() const;
    std::string get_contactFirstName(int n) const;
    std::string get_contactLastName(int n) const;
    std::string get_contactNickName(int n) const;
    std::string get_contactNumber() const;
    std::string get_contactDarkestSecret() const;

    void set_contactId(int id);
    void set_contactFirstName(std::string name);
    void set_contactLastName(std::string lastName);
    void set_contactNickName(std::string nickname);
    void set_contactNumber(std::string number);
    void set_contactDarkestSecret(std::string DarkestSecret);


    //attributes
    private:
    int m_idContact; 
    std::string m_firstName; 
    std::string m_lastName; 
    std::string m_nickName;
    std::string m_number;
    std::string m_darkestSecret;

};

#endif