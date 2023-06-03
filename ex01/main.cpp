#include "PhoneBook.hpp"





 void funcEnter(std::string str, Phonebook *book)
 {
    if (str == "ADD" || str == "add")
        book->ADD();
    else if (str == "SEARCH" || str == "search")
       book->SEARCH();
    else if (str == "exit" || str == "EXIT")
      book->EXIT();
 }


int main()
{
    std::string func;
    Phonebook book;
    while(1)
    {
    std::cout << "enter your chose :" << std::endl;
    std::cin >> func;
    funcEnter(func, &book);
    }

    
 

}