#include <iostream>
using namespace :: std;
int main()
{
    int rent;
    float porc, imp;
    cout<<"ingrese su renta anual";
    cin>> rent;
    if (rent<10000)
    {
        porc=0.05;
    }
    else if (rent>=10000 && rent<20000)
    {
        porc=0.15;
    }
    else if (rent>=20000 && rent<35000)
    {
        porc=0.20;
    }
    else if (rent>=35000 && rent<60000)
    {
        porc=0.30;
    }
    else
    {
        porc=0.45;
    }
    imp=rent*porc;
    cout<< "te corresponde pagar de impuestos: "<<imp;
    return 0;

}