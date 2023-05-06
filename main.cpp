#include "PhoneBook.hpp"


using namespace std;

void help()
{
    cout << "for add New Contact infos Enter /ADD or add " << "\n";
    cout << "for add New search Contact Enter /search  or search " << "\n";
    cout << "for exit  Enter /exit or EXIT " << "\n";
}
 void funcEnter(string& str, Phonebook *book)
 {
    if (str == "ADD" || str == "add")
        book->ADD();
    else if (str == "SEARCH" || str == "search")
         cout << "search enter" << endl;
    else if (str == "exit" || str == "EXIT")
      book->EXIT();
    else
    {
        help();
    }
 }


int main()
{
    string func;
    Phonebook book;
    while(1)
    {
    cout << "enter your chose :" << endl;
    getline(cin, func);
    funcEnter(func, &book);
    }

    
 

}