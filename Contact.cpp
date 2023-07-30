#include "./Contact.hpp"

using namespace std;
// destuctor
Contact::Contact()
{

}
//geters functons
void Contact::get_m_nickName() const
{
    cout << m_nickName << endl;
}

void Contact::get_m_phoneNumber() const
{
    cout << m_phoneNumber << endl;
}


void Contact::get_name() const
{
    cout << m_name << endl;
}

void Contact::get_m_secondName() const 
{
    cout << m_phoneNumber << endl;
}


// seters functions


void Contact::set_name(string name)
{
    m_name = name;
    m_index +=1;
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


