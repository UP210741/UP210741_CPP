
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
#include<iostream>
#include<cmath>

using namespace std;

bool bisiesto(int year)
{
    bool r = true;
    r = year%400==0 || (year%4==0 && year%100!=0);
    
    return r;
}



int main()
{
    int year;
    cout<<"A que año se refiere? " << endl;
    cin>>year;
    cout << bisiesto(year) << endl;

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
#include <math.h> 
using namespace std;

double cos(double x)
{
    double c=0;
    for (int i=0; i<=6;i++)
    {
        c=c+(pow(-1, i)*((pow(x, 2*i))/factorial(2*i)));
    }

    return c;
}

int main()
{   
    double a,r,res;
    cout << "dame el angulo" << endl;
    cin >> a;
    res = G2R(a);
    r = cos(res);
    cout << "coseno: " << r << endl;
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
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int NumDatos;
    cout << "Cuantos datos son? " << endl;
    cin >> NumDatos;
    
    int arr[NumDatos];
    cout << "Ponga los datos de uno por uno en enteros" << endl;

    for(int i=0; i<NumDatos; i++)
    {
        cin >> arr[i];
    }

    int sumatoria=0;
    for (int i = 0; i < NumDatos; i++)
    {
        sumatoria = sumatoria + arr[i];
    }
    
    double media = (double) sumatoria/NumDatos;
    double sum2 = 0.0;

    for (int i = 0; i < NumDatos; i++)
    {
        sum2 = sum2 + (arr[i]- media)*(arr[i] - media);
    }
    
    double varianza = (double) sum2/NumDatos;
    double dem = (double) sum2/(NumDatos-1);
    double desviacionEstandar = sqrt(varianza);
    double desviacionEstandarM = sqrt(dem);

    cout << "Media: " << media << endl;
    cout << "Desviacion Estandar Poblacional: " << desviacionEstandar << endl;
    cout << "Desviacion Estandar Muestral: " << desviacionEstandarM << endl;
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
#include<iostream>
using namespace std;

int main()
{
    int num;
    int unidades;
    int decenas;
    int centenas;
    int millar;
    cout << "Que numero quiere convertir a Romano? " << endl;
    cin >> num;

    unidades = num % 10; num = num / 10;
    decenas = num % 10; num = num/10;
    centenas = num % 10; num = num /10;
    millar = num % 10; num = num/10;

    switch (millar)
    {
        case 1: 
            cout<<"M"; 
        break;
        case 2: 
            cout<<"MM";
        break;
        case 3: 
            cout<<"MMM";
        break;
    }
    switch (centenas)
    {
        case 1: 
            cout<< "C";
        break;
        case 2: 
            cout<< "CC";
        break;
        case 3: 
            cout<< "CCC";
        break;
        case 4: 
            cout<< "CD";
        break;
        case 5: 
            cout<< "D";
        break;
        case 6: 
            cout<< "DC";
        break;
        case 7: 
            cout<< "DCC";
        break;
        case 8: 
            cout<< "DCCC";
        break;
        case 9: 
            cout<< "CM";
        break;
    }
    switch (decenas)
    {
        case 1: 
            cout<< "X";
        break;
        case 2: 
            cout<< "XX";
        break;
        case 3: 
            cout<< "XXX";
        break;
        case 4: 
            cout<< "XL";
        break;
        case 5: 
            cout<< "L";
        break;
        case 6: 
            cout<< "LX";
        break;
        case 7: 
            cout<< "LXX";
        break;
        case 8: 
            cout<< "LXXX";
        break;
        case 9: 
            cout<< "XC";
        break;
    }
    switch (unidades)
    {
        case 1: 
            cout<< "I";
        break;
        case 2: 
            cout<< "II";
        break;
        case 3: 
            cout<< "III";
        break;
        case 4: 
            cout<< "IV";
        break;
        case 5: 
            cout<< "V";
        break;
        case 6: 
            cout<< "VI";
        break;
        case 7: 
            cout<< "VII";
        break;
        case 8: 
            cout<< "VIII";
        break;
        case 9: 
            cout<< "IX";
        break;
    }
    cout << endl;


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
#include<iostream>
using namespace std;

int main()
{
    int i,j,n,temp,vector[100];
    cout<< "Cuantos numeros deseas ingresar: "<< endl;
    cin >> n;
    for (i = 0; i < n; i++){
        cout<< "Ingresa el numero " << 1+i << ")" << endl;
        cin>> vector[i];
    }
    cout << endl;
//Método de la burbuja
    for (i = 0; i < n-1; ++i){
        for (j = 0; j < n-1; ++j){
            if (vector[j] > vector[j+1]){
                temp = vector[j];
                vector[j] = vector[j+1];
                vector[j+1] = temp;
            }
        }
    }
    for (i = 0; i < n; ++i){
        cout<< 1+i << ")" << vector[i] <<endl;
    }

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
