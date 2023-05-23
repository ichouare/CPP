// pointer : is integer store  memory address
// 0 || NULL is invalid memory address
// nullptr : keyword represents a null pointer value
// c++ sensible a case
// variable const "type const name(value)"
// #include <cmath> biblio of math functions
 //int* const a = new int // pointer is const you can't modify how it is pointed to but you can change the content

#include "./Personnage.hpp"


using namespace std;

int main()
{
     short int i;           // a signed short integer
   short unsigned int j;  // an unsigned short integer

   j = 50000;

   i = j;
   cout << i << " " << j;

   return 0;
}