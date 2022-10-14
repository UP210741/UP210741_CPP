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