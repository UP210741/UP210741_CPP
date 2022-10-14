#include<iostream>
#include<cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    float puntuacion = round(0.4);

    if (puntuacion == 0 || puntuacion == 0.4 || puntuacion >= 0.6)
    {
        cout << "El porcentaje es" << puntuacion*100 << "%" << "\n";
    } else 
    {
        cout << "Inválida \n";
    }
    
    return 0;
}