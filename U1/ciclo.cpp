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