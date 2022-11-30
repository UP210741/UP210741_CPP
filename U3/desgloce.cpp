#include <iostream>
#include <stdio.h>
using namespace std;

void getCambio(int);
void displayCambio(string);

int mil = 0, quin = 0, dosc = 0, cien = 0, cinc = 0, veinte = 0, diez = 0, cinco = 0, dos = 0, uno = 0, residue;

int calculo(int billetes, int getdin)
{
    int resultado;
    resultado = getdin / billetes;
    residue = getdin % billetes;
    getdin = residue;

    return resultado;
}
void getCambio(int getdin)
{
    mil = calculo(1000, getdin);
    quin = calculo(500, residue);
    dosc = calculo(200, residue);
    cien = calculo(100, residue);
    cinc = calculo(50, residue);
    veinte = calculo(20, residue);
    diez = calculo(10, residue);
    cinco = calculo(5, residue);
    dos = calculo(2, residue);
    uno = calculo(1, residue);
}

void displayCambio(string)
{
    cout << "- Billetes: \n";
    cout << "Mil: " << mil << endl;
    cout << "Quinientos: " << quin << endl;
    cout << "Docientos: " << dosc << endl;
    cout << "Cien: " << cien << endl;
    cout << "Cincuenta: " << cinc << endl;
    cout << "Veinte: " << veinte << endl;
    cout << "- Monedas: \n";
    cout << "Diez: " << diez << endl;
    cout << "Cinco: " << cinco << endl;
    cout << "Dos: " << dos << endl;
    cout << "Uno: " << uno << endl;
}

int main()
{
    int din;
    string elegir;
    cout << "Ingresa la cantidad de dinero ";
    cin >> din;
    
    getCambio(din);
    displayCambio("dinero");

    return 0;
}