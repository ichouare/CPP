#ifndef Contact_H
#define Contact_H

#include <iostream>
#include <string.h>

class Contact 
{
    public:
    Contact();
    ~Contact();
    int  get_contactId() const;
    std::string get_contactName() const;
    std::string get_contactNickName() const;
    std::string get_contactNumber() const;
    std::string get_contactDarkestSecret() const;

    void set_contactId(int id);
    void set_contactName(std::string name);
    void set_contactNickName(std::string nickname);
    void set_contactNumber(std::string number);
    void set_contactDarkestSecret(std::string DarkestSecret);


    //attributes
    private:
    int m_idContact; 
    std::string m_name; 
    std::string m_nickName;
    std::string m_number;
    std::string m_darkestSecret;

};

#endif