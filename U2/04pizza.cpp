#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int veg, ingr;
    string elemento,tipo;
    cout<<"si quieres tu pizza vegetariana teclea 1, si no teclea 0 \n";
    cin>>veg;
    if(veg==0)
    {
        tipo="no vegetariana";
        cout<<"escoge un ingrediente \n 1.Peperoni \n 2.Jamon \n 3.Salmón \n";
        cin>>ingr;
        switch (ingr)
        {
        case 1:
            elemento="peperoni";
            break;
        case 2:
            elemento="jamon";
            break;
        case 3:
            elemento="salmon";
            break;
        default:
            break;
        }
    }
    else
    {
        tipo="vegetariana";
        cout<<"teclea el numero del ingrediente que desees  \n 1.Pimiento \n 2.Tofu \n ";
        cin>>ingr;
        switch (ingr)
        {
        case 1:
            elemento="pimiento";
            break;
        case 2:
            elemento="tofu";
            break;
        default:
            break;
        }
    }

    cout<<"tu pizza es: "<< tipo<< "\n contiene: mozzarela, t0omate y "<<elemento;
    return 0;
}