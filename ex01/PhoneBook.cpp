#include "PhoneBook.hpp"

using namespace std;
Phonebook::Phonebook()
{
    m_numberofContact = 0;
}

void Phonebook::ADD()
{
    string firstName;
    string secondName;
    string nickName;
    string phone;

    cout << "name of user" << endl;
    getline(cin >> ws, firstName);
    cout << firstName << endl;
    cout << "secondName of user" << endl;
    getline(cin, secondName);
    cout << "nickName of user" << endl;
    getline(cin, nickName);
    cout << "numberPhone of user" << endl;
    getline(cin, phone);
    m_contact[m_numberofContact].set_m_phoneNumber(phone);

    if(!firstName ||  !secondName || !nickName || !phone)
            cout << "contact not save : field empty" << endl;
    else {
        m_contact[m_numberofContact].set_name(firstName);
        m_contact[m_numberofContact].set_m_secondName(secondName);
        m_contact[m_numberofContact].set_m_nickName(nickName);
        m_contact[m_numberofContact].set_m_phoneNumber(phone);
        if(m_numberofContact < 7)
            m_numberofContact++;    
    }
}
void Phonebook::SEARCH()
{
    int index;
    cout << "enter index of contact" << "\n";
    cin >> index;
    if((index < 1 && index > 9) || index > m_numberofContact + 1 || index < 0)
            cout << "no much contact" << "\n";
    else
        {
               this->get_contact(index);
        }
}
void Phonebook::EXIT()
{
    exit(1);
}

int Phonebook::get_index() const
{
    return m_numberofContact;
}

void Phonebook::get_contact(int index) const 
{
    cout << "name is:  " << m_contact[index - 1].get_name();
    cout << "secondName is:  " <<  m_contact[index - 1].get_m_secondName();
    cout << "NickName is:  " <<  m_contact[index - 1].get_m_nickName();
    cout << "numberPhone is:  " <<   m_contact[index - 1].get_m_phoneNumber();
    cout << "\n";
}