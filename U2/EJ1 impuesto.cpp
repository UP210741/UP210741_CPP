#include <iostream>
using namespace std;

int main()
{
    int renta = 0;
    int imp= 0;
    cout <<"dame tu renta anual para darte tu interés correspondiente \n";
    cout <<"\n";
    cin >> renta;
    if (renta <= 10000)
    {
        cout << "\n tu impuesto correspondiente es de 5%";
    } else if (renta > 10000 && renta <= 20000)
    {
        cout << "'\n tu impuesto correspondiente es de 10%";
    } else if (renta > 20000 && renta <= 35000)
    {
        cout << "\n tu impuesto correspondiente es de 15%";
    } else if (renta > 35000 && renta <= 60000)
    {
        cout << "\n tu impuesto correspondiente es de 20%";
    }else if (renta > 60000)
    {
        cout << "\n tu impuesto correspondiente es de 45%";
    }
    return 0;
}