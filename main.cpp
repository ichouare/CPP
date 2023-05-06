#include <iostream>


using namespace std;
namespace issam {
    void print()
    {
        cout << "hello from issam namespace" << endl;
    }
}

void enterCmds(string& func)
{

    if(compare(func, "ADD") == 0)

}

int main()
{
    string func;
    cout << "hello word " << endl;
    cout << "enter your chose :" << endl;
    getline(cin, func);
    enterCmds(func);

}