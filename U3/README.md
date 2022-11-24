
<b><p align="middle"> <img src="https://github.com/UP210741/UP210741_CPP/blob/main/IMG/3.png"> <p><b>

## ***U2:*** Control structures and cycles.


<center>

> ### 1. Bisección:

</center>

 ___
 ```
#include<iostream>
#include<cmath>
using namespace std;

const double E=2.718281828;

double Ecuacion(int x)
{
   double r;
   r = pow(x, 2) - 8*x + 15;
   return r;
}

double Ecuacion2(double x)
{
   double r;
   r= pow(E, -x) + 4*pow(x, 3) -5;

   return r;
}

int main()
{
   int n = 10;
   int Ec;
   for (int i = 0; i<= 10; i++)
   {
       Ec=Ecuacion(i);
       cout << "x = " << i << " Resultado de ecuacion  = "<< Ec << endl;
   }

   return 0;
}

```
---

<center>

 *salida*
---

<img src="https://github.com/UP210741/UP210741_CPP/blob/main/IMG/1.2.png">

---

</center>

<center>

> ### 2. Bisiesto: 

</center>

___
```
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

```
___

<center>

<center>

 *salida*
---

<img src="https://github.com/UP210741/UP210741_CPP/blob/main/IMG/2.2.png">

---

</center>

> ### 3. Coseno:

</center>


___
```
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

```
___

<center>

<center>

 *salida*
---

<img src="https://github.com/UP210741/UP210741_CPP/blob/main/IMG/3.2.png">

---

</center>

> ### 4. Desviación:
> 
</center>

___
```
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int veg, ingr;
    string elemento,tipo;
    cout<<"si quieres tu pizza vegetariana teclea 1, si no teclea 0 \n";
    cin>>veg;
    if(veg==0)
    {
        tipo="no vegetariana";
        cout<<"escoge un ingrediente \n 1.Peperoni \n 2.Jamon \n 3.Salmón \n";
        cin>>ingr;
        switch (ingr)
        {
        case 1:
            elemento="peperoni";
            break;
        case 2:
            elemento="jamon";
            break;
        case 3:
            elemento="salmon";
            break;
        default:
            break;
        }
    }
    else
    {
        tipo="vegetariana";
        cout<<"teclea el numero del ingrediente que desees  \n 1.Pimiento \n 2.Tofu \n ";
        cin>>ingr;
        switch (ingr)
        {
        case 1:
            elemento="pimiento";
            break;
        case 2:
            elemento="tofu";
            break;
        default:
            break;
        }
    }

    cout<<"tu pizza es: "<< tipo<< "\n contiene: mozzarela, t0omate y "<<elemento;
    return 0;
}

```
---

<center>

 *salida*
---

<img src="https://github.com/UP210741/UP210741_CPP/blob/main/IMG/4.2.png">

---
> ### 5. Desgloce: 

</center>

___
```
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    double temp, may=0, men=100000, prom=0;
    for(int i=1;i<=6;i++)
    {
        cout<<"ingresa tu temperatura";
        cin>>temp;
        if(temp>may)
        {
            may=temp;
        }
        
        else if(temp<men)
        {
            men=temp;
        }
        prom=prom+temp;

    }
    prom=prom/6;
    cout<< "el promedio de las temperaturas es: "<<prom<<"\n La temperatura mas alta fue: "<<may<<"\n La temperatura más baja fue: "<<men;
    return 0;
}
```
___

<center>

 *salida*
---

<img src="https://github.com/UP210741/UP210741_CPP/blob/main/IMG/5.2.png">

 ----
 
 <center>

> ### 6. Romano:   

</center>

 ___
 ```
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    double compras=1,total=0, cant, subtotal;
    while (compras!=0)
    {
        cout<<"ingrese el precio de su articulo";
        cin>>compras;
        if(compras!=0)
        {
          cout<<"cuantos articulos de estos lleva?";
        cin>>cant;  
        }
        subtotal=compras*cant;
        total=subtotal+total;
    }
    cout<<"su total es de: $"<<total;
    return 0;
}

```
---

<center>

 *salida*
---

<img src="https://github.com/UP210741/UP210741_CPP/blob/main/IMG/6.2.png">

---

</center>

<center>
 
 <center>

> ### 7. RFC:   

</center>

 ___
 ```
#include <iostream>
using namespace std;
#include <math.h>
int main(int argc, char const *argv[])
{
    string bin;
    int tam, sum=0;
    cout<<"ingrese el número binario a convertir"<<endl;
    cin>>bin;
    tam=bin.size();
    for (int i = (tam-1); i >=0; i--)
    {
        if (bin[i]=='1')
        {
            sum=sum + pow(2,((tam-1)-i));
        }
    }
    cout<<"el numero "<<bin<<" en decimal es: "<<sum<<endl;

    return 0;
}
```
---

<center>
 
 *salida*
---

<img src="https://github.com/UP210741/UP210741_CPP/blob/main/IMG/7.2.png">


---

</center>

<center>

> ### 8. Vector: 

</center>

___
```
#include <iostream>
using namespace std;
#include <math.h>
int main(int argc, char const *argv[])
{
    string bin;
    int tam, sum=0;
    cout<<"ingrese el número binario a convertir"<<endl;
    cin>>bin;
    tam=bin.size();
    for (int i = (tam-1); i >=0; i--)
    {
        if (bin[i]=='1')
        {
            sum=sum + pow(2,((tam-1)-i));
        }
    }
    cout<<"el numero "<<bin<<" en decimal es: "<<sum<<endl;

    return 0;
}
```
---

<center>
 
 *salida*
---

<img src="https://github.com/UP210741/UP210741_CPP/blob/main/IMG/7.2.png">


 </center>
<center>
