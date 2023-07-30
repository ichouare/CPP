#include "./PhoneBook.hpp"

int check_number(std::string number)
{   
    unsigned int i = 0;
    if(number.empty())
        return (1);
    while(i < number.length() - 1)
    {
        if(i == 0 && (isdigit(number.at(i))  != 0 || number[i] == '+'))
            i++;
        else if(i != 0 && (isdigit(number.at(i))  != 0 || number[i] == ' '))
            i++;
        else
            return (2);
    }
    if(i == number.length() - 1)
        return (1);
    else
        return (2);
}

PhoneBook::PhoneBook():m_counter(0),m_len(0)
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
    {
        m_counter++;
        m_len++;

    }
}

void PhoneBook::EXIT()
{
    exit(0);
}


void  PhoneBook::ADD()
{
    std::string name;
    std::string lastName;
    std::string nickName;
    std::string number;
    std::string Secret;

    std::cout<< "fistName:";
    std::getline(std::cin, name);
    if(name.length() == 0 && std::cin.eof())
        exit(0);
    std::cout<< "lastName:";
    std::getline(std::cin, lastName);
    if(lastName.length() == 0 && std::cin.eof())
        exit(0);
    std::cout<< "NickName:";
    std::getline(std::cin, nickName);
    if(nickName.length() == 0 && std::cin.eof())
        exit(0);
    std::cout<<"Number:";
    std::getline(std::cin, number);
    if(number.length() == 0 && std::cin.eof())
        exit(0);
    while(check_number(number) != 1)
    {
        std::cout << "number phone  must be numeric" << std::endl;
        std::cout<<"Number:";
        std::getline(std::cin, number);
        if(number.length() == 0 && std::cin.eof())
            exit(0);
    }
    std::cout<<"darkestSecret:";
    std::getline(std::cin, Secret);
    if(Secret.length() == 0 && std::cin.eof())
        exit(0);
    if(name.length() && lastName.length() && nickName.length() &&  number.length() && Secret.length() )
        {
            m_contact[m_counter].set_contactId(m_counter);
           m_contact[m_counter].set_contactFirstName(name);
           m_contact[m_counter].set_contactLastName(lastName);
           m_contact[m_counter].set_contactNickName(nickName);
           m_contact[m_counter].set_contactNumber(number);
           m_contact[m_counter].set_contactDarkestSecret(Secret);
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
    if(m_len == 0)
        std::cout << "EMPTY" << std::endl;
    else
    {
        int index = 0;
    while(i < m_len)
    {
        std::cout << std::setw(5) <<  m_contact[i].get_contactId();
        std::cout << " | ";
        std::cout << std::setw(5) <<  m_contact[i].get_contactFirstName(1);
        std::cout << " | ";
        std::cout << std::setw(5) <<  m_contact[i].get_contactLastName(1);
        std::cout << " | ";
        std::cout << std::setw(5) <<  m_contact[i].get_contactNickName(1);
        std::cout << std::endl;
        i++;
    }
    while(index < 1 || index > 8)
    {
        std::cout << "Enter Index:";
        std::cin >> index;
        if(index < 1 || index  > 8)
            std::cout << "index out of range " << std::endl;
        else
            {
                std::cout << "id :" << std::setw(5) <<  m_contact[index - 1].get_contactId() << std::endl;
                std::cout << "first Name:" <<  std::setw(5) <<  m_contact[index - 1].get_contactFirstName(2) << std::endl ;
                std::cout << "last Name:" <<  std::setw(5) <<  m_contact[index - 1].get_contactLastName(2) << std::endl;
                std::cout << "nickname:" <<  std::setw(5) <<  m_contact[index -1 ].get_contactNickName(2) << std::endl;
                std::cout << "number:" <<  std::setw(5) <<  m_contact[index - 1 ].get_contactNumber() << std::endl;
                std::cout << "nickname :" <<  std::setw(5) <<  m_contact[index - 1].get_contactDarkestSecret() << std::endl;
            }
        std::cin.ignore(1);
    }
        
    }
}