/* U1. tipos de datos 
autor: López Morales Bertha Adriana 
fecha: 12 sep 22
descripción: muestra los diferentes tipos de datos en c++ 
*/ 

//libreria para manejor de entradas y salida de pantalla 
#include <iostream> 
//libreria para el uso de prinf y scanf 
#include <stdio.h>

//uso del namescape para evitar el std:: 
using namespace std; 

//función pricipal de tipo entero 
int main ()
{ 
    //mas informacion en: 
    //https://www.geeksforgeeks.org/c-data-types/
    int entero = 2147483647; 
    float flotante = 3.4e38; 
    double grande = 2.565465654654;
    char caracter ='@';

    cout << "este programa muestra los tipos de datos. \n"; 
    cout << "el número entero es: " << entero << endl; 
    cout << "el tamaño del entero es: " << sizeof (entero) << "bytes" << endl; 
    cout << "el número flotente es: " << flotante << endl; 
    getchar(); 
    return 0; 
} 