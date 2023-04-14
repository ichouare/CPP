#include "PhoneBook.hpp"

using namespace std;
Phonebook::Phonebook()
{

}

void Phonebook::ADD(string name, int index, string nameSecond , string nickname, string number)
{
    cout << "enter new user" << endl;
    getline(cin, name);
    m_contact[1].set_name(name);
}

void Phonebook::SEARCH()
{

}
void Phonebook::EXIT()
{
    exit(0);
}