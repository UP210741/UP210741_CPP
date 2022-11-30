#include <iostream>
#include <math.h> 
using namespace std;

double cos(double x)
{
    double c=0;
    for (int i=0; i<=6;i++)
    {
        c=c+(pow(-1, i)*((pow(x, 2*i))/factorial(2*i)));
    }

    return c;
}

int main()
{   
    double a,r,res;
    cout << "dame el angulo" << endl;
    cin >> a;
    res = G2R(a);
    r = cos(res);
    cout << "coseno: " << r << endl;
}