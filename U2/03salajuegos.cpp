#include <iostream>
using namespace std;

int main()
{
    int edad;
    char sn;
    do
    {
        cout << "ingrese la edad del cliente \n";
        cin>>edad;
        if (edad<4){
            cout<<"la entrada es gratis \n";
        }else if (edad<=18){
                cout<<"la entrada cuesta $5 \n";
            }else{
                cout<<"la entrada cuesta $10 \n";
            }
        cout<<"¿desea hacer otra consulta? (s/n)";
        cin>>sn;
    } while (sn=='s');   
    return 0;
}