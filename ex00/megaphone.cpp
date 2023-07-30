#include <iostream>
#include <string.h>


using namespace std;

void ftConvert(char *str)
{
    int i = strlen(str);
    while(i--)
    {
       str[i] = std::toupper(str[i]);
    }
}

int main (int argc, char **argv)
{
    int i = 1;
    if (argc == 1)
    {
        return 1;
    }
    while(i < argc)
    {
        ftConvert(argv[i]);
        i++;
    }
    std::cout << argv[2] << std::endl;
}   