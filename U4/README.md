<b><p align="middle"> <img src="https://github.com/UP210741/UP210741_CPP/blob/main/IMG/5.jpg"> <p><b>

## ***U4:*** Files and arrays.
 
</center>

 ___
 ```

TEAM: 
Maria Fernanda Aguilar Gonzalez     UP210685
Bertha Adriana López Morales        UP210741

 ___
 ```

<center>

## ***GAME:*** T I C  T A C  T O E 
 

</center>

 ___
 ```
/*  Members: 
Lopez Morales Bertha Adriana 
Maria Fernanda Alguilar Martinez 
Proyect "Tic Tac Toe" 
Unid: 4 */ 

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;  

char tablero1[3][3];

/* variables */
int turno = 0; 
string player1 = "";
string player2 = "";

/* construccion de tablero */
void tablero(){
    int x = 0;
    int y = 0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 3; j++) 
        {
            if (i < 5 && i % 2 == 1) 
            {
                cout << "_";
            } else 
            {
                if (i < 5 ) 
                {
                    cout << " " << tablero1[x][y] << " ";  
                    y++;
                } else {
                    cout << "   ";
                }
            }
            if (j < 2) 
            {
                cout << "|"; 
            }
        }
        y = 0;
        if (i % 2 == 0) 
        {
            x++;
        } 
        cout << endl; 
    }
}
void clrscr()
{
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord = {0, 0};
    DWORD count;
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hStdOut, &csbi);
    FillConsoleOutputCharacter(hStdOut, ' ', csbi.dwSize.X * csbi.dwSize.Y,
                               coord, &count);
    SetConsoleCursorPosition(hStdOut, coord);
}
char jugadas(){
    cout<< endl;
    cout << "OPCIONES DE JUEGO: " << endl; 
    int contador = 0;   
    string opciones = "abcdefghi"; 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
             cout << opciones[contador] <<  ") ["<< i << ", " << j << "]"; 
            if (tablero1[i][j] != NULL) 
            {
                cout << "NO DISPONIBLE"; 
            }
            cout << endl; 
            contador ++; 
        }
    } 
    cout << endl;
    if (turno %2 == 0 ){
        cout << player1;
    } else {
        cout << player2;
    }
    cout << " , elige una jugada:"; 
    return getch(); 
}

/* turno */
void compturno(int x, int y){ 
    if (turno %2 == 0 ){
        tablero1[x][y] = 'x'; 
    } else {
        tablero1[x][y] = 'o';
    }
    turno ++; 
}

/* verificación de jugadas */

int validarjugada(char jugada){ 
    if (jugada >= 'a' && jugada <= 'i'){

        /* posicion disponible*/
        switch (jugada ){  
            case 'a':
                if (tablero1[0][0] == NULL){
                compturno(0, 0); 
                return 1; 
            }
            break; 
            case 'b':
                if (tablero1[0][1] == NULL){
                compturno(0, 1); 
                return 1; 
            }
            break;
            case 'c':
                if (tablero1[0][2] == NULL){
                compturno(0, 2); 
                return 1; 
            }
            break;
            case 'd':
                if (tablero1[1][0] == NULL){
                compturno(1, 0); 
                return 1; 
            }
            break;
            case 'e':
                if (tablero1[1][1] == NULL){
                compturno(1, 1); 
                return 1; 
            }
            break;
            case 'f':
                if (tablero1[1][2] == NULL){
                compturno(1, 2); 
                return 1; 
            }
            break;
            case 'g':
                if (tablero1[2][0] == NULL){
                compturno(2, 0); 
                return 1; 
            }
            break;
            case 'h':
                if (tablero1[2][1] == NULL){
                compturno(2, 1); 
                return 1; 
            }
            break;
            case 'i':
                if (tablero1[2][2] == NULL){
                compturno(2, 2); 
                return 1; 
            }
            break;
        }
    }
    return 0; 
}

//WINNER  
int validarganador (){
    if (tablero1[0][0] != NULL && tablero1[0][0] == tablero1[0][1] && tablero1[0][0] == tablero1[0][2]){
        return 1; 
    }
    if (tablero1[1][0] != NULL && tablero1[1][0] == tablero1[1][1] && tablero1[1][0] == tablero1[1][2]){
        return 1; 
    }
    if (tablero1[2][0] != NULL && tablero1[2][0] == tablero1[2][1] && tablero1[2][0] == tablero1[2][2]){
        return 1; 
    }
    if (tablero1[0][0] != NULL && tablero1[0][0] == tablero1[1][0] && tablero1[0][0] == tablero1[2][0]){
        return 1; 
    }
    if (tablero1[0][1] != NULL && tablero1[0][1] == tablero1[1][1] && tablero1[0][1] == tablero1[2][1]){
        return 1; 
    }
    if (tablero1[0][2] != NULL && tablero1[0][2] == tablero1[1][2] && tablero1[0][2] == tablero1[2][2]){
        return 1; 
    }
    if (tablero1[0][0] != NULL && tablero1[0][0] == tablero1[1][1] && tablero1[0][0] == tablero1[2][2]){
        return 1; 
    }
    if (tablero1[0][2] != NULL && tablero1[0][2] == tablero1[1][1] && tablero1[0][2] == tablero1[2][0]){
        return 1; 
    }
    return 0; 
}
void identificarGanador(int turnoantes){
    cout <<"FELICIDADES, HAY UN GANADOR!!!";
    if (turnoantes %2 == 0 ){
        cout << "El ganador es " << player1 <<"[x]";
    } else {
        cout << "El ganador es " << player2 <<"[o]";
    }
}
int main (){
    
    int numeroturno = 0; 
    int jugadavalida = 0; 
    int ganador = 0; 
    clrscr();
    cout << " T I C   T A C   T O E  " << endl;
    cout << "INGRESE EL NOMBRE DEL PRIMER JUGADOR" << endl;
    cin >> player1;
    cout << "INGRESE EL NOMBRE DEL SEGUNDO JUGADOR" << endl;
    cin >> player2;
    clrscr();

    while (numeroturno < 9 && ganador == 0){
        clrscr();
        tablero();
        jugadavalida = validarjugada(jugadas()); 
        if (jugadavalida == 1){
            ganador == validarganador();
            numeroturno++; 
        }
    }
    cout << endl;
    clrscr();
    tablero();
    if (ganador == 1)
    {
        identificarGanador(numeroturno-1);
    } else{
        cout <<"HAY UN EMPATE";
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

 *FLOW CHART*
---

<img src="https://github.com/UP210741/UP210741_CPP/blob/main/IMG/diagramaflujo.png">

---

</center>
