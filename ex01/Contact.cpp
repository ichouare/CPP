#include "./Contact.hpp"

using namespace std;

Contact::Contact()
{

}
//geters functons
std::string Contact::get_m_nickName() const
{
    return m_nickName;
}

std::string Contact::get_m_phoneNumber() const
{
    return m_phoneNumber;
}


std::string Contact::get_name() const
{
   return m_name;
}

std::string Contact::get_m_secondName() const 
{
   return m_secondName;
}


// seters functions


void Contact::set_name(std::string name)
{
    m_name = name;
}

void Contact::set_m_secondName(std::string secondName)
{
    m_secondName = secondName;
}

void Contact::set_m_nickName(std::string nickname)
{
    m_nickName = nickname;
}

void Contact::set_m_phoneNumber(std::string phoneNuber)
{
    m_phoneNumber = phoneNuber;
}
