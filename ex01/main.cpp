#include "./PhoneBook.hpp"


int main()
{
    PhoneBook myPhoneBook;
    std::string userPut;
    std::cout << "welcome to Your PhoneBook" << std::endl;
    std::cout << "To Add Contact Enter: ADD" << std::endl;
    std::cout << "To Search Contact Enter: SEARCH" << std::endl;
    std::cout << "To exit Enter: EXIT" << std::endl;

    while(1)
    {
        std::cout << "--------Enter Your chose-----------------" << std::endl;
        getline(std::cin, userPut, '\n');
        if(userPut.empty())
            exit(0);
       if(userPut == "ADD")
            myPhoneBook.ADD();
        else if(userPut == "SEARCH")
            myPhoneBook.SEARCH();
        else if(userPut == "EXIT")
            myPhoneBook.EXIT();
        else
            std::cout<<"this option not found"<< std::endl;
       } 
    }