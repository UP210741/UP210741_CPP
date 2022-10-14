#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    double compras=1,total=0, cant, subtotal;
    while (compras!=0)
    {
        cout<<"ingrese el precio de su articulo";
        cin>>compras;
        if(compras!=0)
        {
          cout<<"cuantos articulos de estos lleva?";
        cin>>cant;  
        }
        subtotal=compras*cant;
        total=subtotal+total;
    }
    cout<<"su total es de: $"<<total;
    return 0;
}