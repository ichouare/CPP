#include "./Contact.hpp"

using namespace std;

Contact::Contact()
{

}
//geters functons
string Contact::get_m_nickName() const
{
    return m_nickName;
}

string Contact::get_m_phoneNumber() const
{
    return m_phoneNumber;
}


string Contact::get_name() const
{
   return m_name;
}

string Contact::get_m_secondName() const 
{
   return m_secondName;
}


// seters functions


void Contact::set_name(string name)
{
    m_name = name;
}

void Contact::set_m_secondName(string secondName)
{
    m_secondName = secondName;
}

void Contact::set_m_nickName(string nickname)
{
    m_nickName = nickname;
}

void Contact::set_m_phoneNumber(string phoneNuber)
{
    m_phoneNumber = phoneNuber;
}
