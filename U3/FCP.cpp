#include <iostream>
using namespace std; 

// declaracion 
long int factorial(int n); 

int main () {
    long int r; 
    r = factorial(4); 
    cout << r << endl; 
    return 0; 
}

long int factorial(int n) {
    long int ft = 1 ; 
    int i; 

    for (i = 1; i <= n; i++) 
    ft *= i; 
    

    return ft; 
}

 