#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string apellidoP;
    string apellidoM;
    string nombre;
    string fecha;
    string RFC;

    cout << "Dame tu nombre completo empezando por apellidos, de uno en uno [EN MAYUSCULAS]" << endl;
    cin >> apellidoP;
    cin >> apellidoM;
    cin >> nombre;

    cout << "Dame tu fecha de nacimiento sin espacios" << endl;
    cin >> fecha;

    RFC = apellidoP.substr(0, 2) + apellidoM.substr(0, 1) + nombre.substr(0, 1) + fecha.substr(4, 4) + fecha.substr(2, 2) + fecha.substr(0, 2);
    cout << "Tu RFC es " << RFC << endl;

    return 0;
}