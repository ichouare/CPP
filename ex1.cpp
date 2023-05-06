#include <iostream>
#include <string>
using namespace std;

void console_char(string& buffer)
{
   int i = 0;
   while(buffer[i])
   {
        if(buffer[i] >= 'a' && buffer[i] <= 'z')
            buffer[i] -= 32;
        i++;
   }
}
int main(int argc, char **argv)
{
    int i = 1;
    while(i < argc)
    {
        console_char(argv[i]);
        std :: cout << argv[i];
        std :: cout << "\n";
        i++;
    }


}