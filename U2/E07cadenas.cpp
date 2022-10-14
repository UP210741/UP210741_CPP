#include <iostream>
using namespace std; 

int main (int argc, char const *argv[]) {
    string cadena = "universidad"; 
    char texto [20]="politecnica"; 
    int i = 0; 

    int longitud = cadena.length();
    for (int i = 0; i < longitud; i++)

    {
        /* code */
        cout << cadena [i] << " "; 
    }
    cout << "... hecho" << endl; 
    return 0;
}