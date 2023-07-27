#include "phoneBook.hpp"

// int checkNumber(std::string number)
// {
   
// }
PhoneBook::PhoneBook():m_counter(0)
{
    
}

int PhoneBook::get_index()const 
{
    return m_counter;
}

void PhoneBook::set_index()
{
    if(m_counter == 7)
        m_counter = 0;
    else
        m_counter++;
}

void PhoneBook::EXIT()
{
    exit(0);
}


void  PhoneBook::ADD()
{
    std::string name;
    std::string nickName;
    std::string number;
    std::string darkestSecret;

    std::cout<< "Name:";
    std::cin>>name;
    std::cout<< "NickName:";
    std::cin>>nickName;
    std::cout<<"Number:";
    std::cin>>number;
    std::cout<<"darkestSecret:";
    std::cin>>darkestSecret;
    if(name.length() && nickName.length() &&  number.length() && darkestSecret.length())
        {
           m_contact[m_counter].set_contactId(m_counter);
           m_contact[m_counter].set_contactName(name);
           m_contact[m_counter].set_contactNickName(nickName);
           m_contact[m_counter].set_contactNumber(number);
           m_contact[m_counter].set_contactDarkestSecret(darkestSecret);
           this->set_index();
           std::cout<< "save completed" << std::endl;
        }
    else
    {
        std::cout<< "sumbit not completed:empty filed" << std::endl;
    }



}

void PhoneBook::SEARCH()
{
    int i = 0;
    std::cout << "yours PHONE CONTACT : " << std::endl;
    if(m_counter == 0)
        std::cout << "EMPTY" << std::endl;
    else
    {
    while( i < m_counter)
    {
        std::cout<<  m_contact[i].get_contactId();
        std::cout << " |";
        std::cout << m_contact[i].get_contactName();
        std::cout << " |";
        std::cout <<  m_contact[i].get_contactNickName();
        std::cout << " |";
        std::cout << m_contact[i].get_contactNumber() << std::endl;
        i++;
    }
        
    }
}

