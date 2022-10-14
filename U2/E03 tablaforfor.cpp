#include <iostream>
using namespace std;

int main()
{

    //TODAS LAS TABLAS DE 1 A 10
    for (int i = 1; i <=10; i++)
    {
        cout << "Tabla del "<<i<<"\n";
        cout << "\n";
        for (int j = 1; j <=10; j++)
        {
            cout << i << " x " << j << " = " <<(i*j)<<"\n";
        }
        cout<<"\n";
    }
return 0;
}