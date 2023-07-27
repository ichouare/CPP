#include "phoneBook.hpp"

// int checkNumber(std::string number)
// {
   
// }
PhoneBook::PhoneBook():m_counter(1)
{
    
}

int PhoneBook::get_index()const 
{
    return m_counter;
}

void PhoneBook::set_index()
{
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
    if(name.size() && nickName.size() &&  number.size() && darkestSecret.size())
        {
           m_contact[m_counter - 1].set_contactId(m_counter);
           m_contact[m_counter - 1].set_contactName(name);
           m_contact[m_counter - 1].set_contactName(nickName);
           m_contact[m_counter - 1].set_contactName(number);
           m_contact[m_counter - 1].set_contactName(darkestSecret);
           this->set_index();
           if(m_counter == 8)
           {
                m_counter = 1;
           }
           std::cout<< "save completed" << std::endl;
        }
    else
    {
        std::cout<< "sumbit not completed:empty filed" << std::endl;
    }



}

void PhoneBook::SEARCH()
{

}

