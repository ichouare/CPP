#include "./phoneBook.hpp"


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
        std::cin>>userPut;
       if(userPut == "ADD" || userPut == "add" )
        myPhoneBook.ADD();
    else if(userPut == "SEARCH" || userPut == "search")
        myPhoneBook.SEARCH();
    else if(userPut == "EXIT" || userPut == "exit")
        myPhoneBook.EXIT();
    else
        std::cout<<"this option not found"<< std::endl;
       }
    }
