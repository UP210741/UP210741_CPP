#include<iostream>
using namespace std;

int main()
{
    int count=11;
    int n,mult; 
    char pr; 
    do {
        cout <<"dame un número y te diré su tabla de multiplicar \n";
        cout <<"\n";
        cin >> n;
        for (int i = 1; i < count; i++)
        {
            mult = n*i;
            cout << n << "*" << i << "=" << mult << "\n";
        }
        cout <<"deseas sacar otra tabla? (s/n) \n"; 
        cin >> pr; 
    } while (pr=='s');
    return 0;
    getchar ();
}