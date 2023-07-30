#include "./Contact.hpp"

    Contact::Contact()
    {

    }

    Contact::~Contact()
    {

    }

   int  Contact::get_contactId() const
    {
        return m_idContact;
    }

    std::string Contact::get_contactFirstName(int n) const
    {
                 if(n == 1 && m_firstName.length() > 10)
        {
                return m_firstName.substr(0, 9) + ".";
        }
        else
            return  m_firstName;
    }
    std::string Contact::get_contactLastName(int n) const
    {
            if(n == 1 && m_lastName.length() > 10)
        {
                return m_lastName.substr(0, 9) + ".";
        }
        else
            return  m_lastName;
    }

    std::string Contact::get_contactNickName(int n) const
    {
        if(n == 1 && m_nickName.length() > 10)
        {
                return m_nickName.substr(0, 9) + ".";
        }
        else
            return  m_nickName;
    }

    std::string Contact::get_contactNumber() const
    {
        return m_number;
    }

    std::string Contact::get_contactDarkestSecret() const
    {
            return  m_darkestSecret;
    }


    void Contact::set_contactId(int id)
    {
        m_idContact = id + 1;
    }

    void Contact::set_contactFirstName(std::string name)
    {
        m_firstName = name;
    }
    void Contact::set_contactLastName(std::string lastName)
    {
        m_lastName = lastName;
    }

    void Contact::set_contactNickName(std::string nickname)
    {
        m_nickName = nickname;
    }

void Contact::set_contactNumber(std::string number)
{
    m_number = number;
}

void Contact::set_contactDarkestSecret(std::string DarkestSecret)
{
    m_darkestSecret = DarkestSecret;
}