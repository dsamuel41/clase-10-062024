#include <iostream>
using namespace std;
int main (int arg, char *argv[])
{
    cout <<"Argumentos de entrada:"<< arg << "\n";
    for (int i = 0; i < _argc; i++)
    {
        cout << argv[i]<< "\n";
    }
    
    return 0;
}