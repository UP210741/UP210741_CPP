#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    double punt, din;
    string nivel;
    cout << "ingresa tu puntuación";
    cin >> punt;
    if (punt == 0 || punt == 0.4 || punt >= 0.6)
    {
        if (punt == 0)
        {
            nivel = "inaceptable";
        }
        else if (punt == 0.4)
        {
            nivel = "aceptable";
        }
        else if (punt >= 0.6)
        {
            nivel = "meritorio";
        }
        din = punt * 2400;
        cout << "tu nivel es: " << nivel << " recibirás: $" << din;
    }
    else
    {
        cout << "puntuación inválida";
    }

    return 0;
}