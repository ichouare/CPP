#include "PhoneBook.hpp"

Phonebook::Phonebook()
{
    m_numberofContact = 0;
}

void Phonebook::ADD()
{
    std::string firstName("");
    std::string secondName("");
    std::string nickName("");
    std::string phone("");

    std::cout << "name of user" << std::endl;
    getline(std::cin >> std::ws, firstName);
    std::cout << "secondName of user" << std::endl;
    getline(std::cin, secondName);
    std::cout << "nickName of user" << std::endl;
    getline(std::cin, nickName);
    std::cout << "numberPhone of user" << std::endl;
    getline(std::cin, phone);
    m_contact[m_numberofContact].set_m_phoneNumber(phone);

    if(!firstName.size() ||  !secondName.size() || !nickName.size() || !phone.size())
            std::cout << "contact not save : field empty" << std::endl;
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

    std::cout << "enter index of contact" << "\n";
    std::cin >> index;
    if((index < 1 && index > 9) || index > m_numberofContact + 1 || index < 0)
        std::cout << "no much contact" << "\n";
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
    std::cout << "name is:  " << m_contact[index - 1].get_name();
    std::cout << "secondName is:  " <<  m_contact[index - 1].get_m_secondName();
    std::cout << "NickName is:  " <<  m_contact[index - 1].get_m_nickName();
    std::cout << "numberPhone is:  " <<   m_contact[index - 1].get_m_phoneNumber();
    std::cout << "\n";
}