
<b><p align="middle"> <img src="https://github.com/UP210741/UP210741_CPP/blob/main/IMG/2.jpg"> <p><b>

## ***U1:*** Programming introduction.


<center>

> ### 1. helloworld 

</center>

 ___
 ```
#include <iostream>

using namespace std; 

int main(){
cout<<"hello wordl";
getchar ();
    return 0;
}

```
---

<center>

 *salida*
---

<img src="https://github.com/UP210741/UP210741_CPP/blob/main/IMG/hello.png">

---

</center>

<center>

> ### 2. parimpar 

</center>

___
```
#include<iostream>
using namespace std;

int main()
{
    cout <<"Par o Impar" <<endl<<"\n" <<endl;
    return 0;
}

```
___

<center>

<center>

 *salida*
---

<img src="https://github.com/UP210741/UP210741_CPP/blob/main/IMG/pi.png">

---

</center>

> ### 3. tipos de datos 

</center>


___
```
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

```
___

<center>

<center>

 *salida*
---

<img src="https://github.com/UP210741/UP210741_CPP/blob/main/IMG/td.png">

---

</center>

> ### 4. ciclo:
> 
</center>

___
```
#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int suma = 0;
    int par = 0;
    int impar = 0;
    int total = impar + par;
    for (int i = 1; i <= n; i++)
{
        printf(" contador %d \n", i);
        printf("\n");
suma = suma + i;
        si (i % 2 == 0)
{
par += i;
}
        otro
{
impar += i;
}

}
total = impar + par;
    printf(" la suma de los impares es %d \n", impar);
    printf("\n");
    printf(" la suma de los pares es %d \n", par);
    printf("\n");
    printf(" la suma total es %d \n", total);
    printf("\n");

    getchar ();
    return 0;
}

```
---

<center>

 *salida*
---

<img src="https://github.com/UP210741/UP210741_CPP/blob/main/IMG/ciclo.png">

---
> ### 5. edades: 

</center>

___
```
#include <iostream>
using namespace std;

int main()
{
    int e = 0;
cout <<"dame tu edad para ver a que categoría perteneces \n";
cout <<"\n";
cin >> e;
    si (e >= 1 && e <= 30)
{
cout <<"\n";
cout <<"eres primera Edad";
cout <<"\n";
}
    otro 
{
        si (e >= 31 && e<= 60)
{
cout <<"\n";
cout <<"eres pegunda Edad";
cout <<"\n";
}
        otro 
{
            if (e >= 61 && e <=90)
{
cout <<"\n";
cout <<"eres tercera Edad";
cout <<"\n";
}
            otro 
{
cout <<"\n";
cout <<"eres horas extra";
cout <<"\n";
}
}
}
    devolución 0;
    return 0;
}

```
___

<center>

 *salida*
---

<img src="https://github.com/UP210741/UP210741_CPP/blob/main/IMG/e1.png">
<img src="https://github.com/UP210741/UP210741_CPP/blob/main/IMG/e2.png">
