#include<iostream>
using namespace std;

int main()
{
    int count=0;
    int n,mult; 
    cout <<"Dame un número y te diré su tabla de multiplicar \n";
    cout <<"\n";
    cin >> n;
    /*ciclo for*/
    for (int i = 10; i > 0; i--)
    {
        mult = n*i;
        cout << n << "*" << i << "=" << mult << "\n";
    }
    return 0;
}