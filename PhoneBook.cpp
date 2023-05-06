#include "PhoneBook.hpp"

using namespace std;
Phonebook::Phonebook()
{
    m_numberofContact = 0;
}

void Phonebook::ADD()
{
    string name;
    cout << "name of user" << endl;
    getline(cin, name);
    m_contact[m_numberofContact].set_name(name);
    cout << "secondName of user" << endl;
    getline(cin, name);
    m_contact[m_numberofContact].set_m_secondName(name);
    cout << "nickName of user" << endl;
    getline(cin, name);
    m_contact[m_numberofContact].set_m_nickName(name);
    cout << "numberPhone of user" << endl;
    getline(cin, name);
    m_contact[m_numberofContact].set_m_phoneNumber(name);
    if(m_numberofContact < 7)
        m_numberofContact++;
    cout << get_index() << endl;
    
}
void Phonebook::SEARCH()
{
    
}
void Phonebook::EXIT()
{
    exit(1);
}

int Phonebook::get_index() const
{
    return m_numberofContact;
}