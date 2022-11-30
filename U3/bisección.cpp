#include<iostream>
#include<cmath>
using namespace std;

const double E=2.718281828;

double Ecuacion(int x)
{
   double r;
   r = pow(x, 2) - 8*x + 15;
   return r;
}

double Ecuacion2(double x)
{
   double r;
   r= pow(E, -x) + 4*pow(x, 3) -5;

   return r;
}

int main()
{
   int n = 10;
   int Ec;
   for (int i = 0; i<= 10; i++)
   {
       Ec=Ecuacion(i);
       cout << "x = " << i << " Resultado de ecuacion  = "<< Ec << endl;
   }

   return 0;
}