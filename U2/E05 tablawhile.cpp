#include<iostream>
using namespace std; 

int main()
{
    int n,mult,contador;

   contador = 1;
   cout << "dame un número para sacar su tabla de multiplicar"<< endl;
   cin >> n;
   cout <<endl;
   while (contador <= 10)
   {

    mult = n*contador;
        cout << n << "*" << contador << "=" << mult << "\n";

    contador++;
   }
    return 0;
}