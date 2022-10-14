#include <iostream>
using namespace std;

int main()
{
    char letra= 'A';
    for (int i = 0; i < 26; i++)
    {˜
        cout <<letra<< "\t";
        letra=letra+1;
    }
    cout <<endl;
    letra=letra+6;
    for (int i = 0; i <26; i++)
    {
        cout <<letra << "\t";
        letra= letra + 1;
    }
    cout <<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<< i+1 <<"\t";
    }
    for (int j = 10; j > 0; j--)
    {
        cout<< j << "\t";
    }
    return 0;
}