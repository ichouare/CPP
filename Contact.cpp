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

    std::string Contact::get_contactName() const
    {
        return m_name;
    }

    std::string Contact::get_contactNickName() const
    {
        return m_nickName;
    }

    std::string Contact::get_contactNumber() const
    {
        return m_number;
    }

    std::string Contact::get_contactDarkestSecret() const
    {
        return m_darkestSecret;
    }


    void Contact::set_contactId(int id)
    {
        m_idContact = id;
    }

    void Contact::set_contactName(std::string name)
    {
        m_name = name;
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