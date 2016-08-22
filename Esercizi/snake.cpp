#include <iostream>
#include <cstdlib>
#include <unistd.h>


using namespace std;

const int altezza = 20;
const int lunghezza = 20;
int testaX, testaY;
int fruttoX, fruttoY;

int tastiera();
void fruttolo();
void disegna();
void logica();

int tastiera(){
    int dir = 0;
    if (kbhit()){
        char key;
        key = getch();

    switch (key){
        case (a): dir = 1; break;
        case (d): dir = 2; break;
        case (w): dir = 3; break;
        case (s): dir = 4; break;
        }
    }
    return dir;
}

void fruttolo(){

fruttoX = rand() % altezza;
fruttoY = rand() % lunghezza;

}
void setup (){
    //setto la posizione iniziale della testa
    testaX = lunghezza/2;
    testaY = altezza/2;
    fruttolo();
}

void disegna (){
 system("clear");
    for (int y=0 ; y<= altezza+1 ; y++){

        for ( int x=0; x<= lunghezza +1 ; x++){

            //Stampo la cornice
            if (y==0 || y== altezza+1||x==0 || x==lunghezza+1){
                cout << "#";
                }
            //Stampo la testa
            else if (x == testaX && y == testaY){
                    cout << "@";
                    }
            else if (x == fruttoX && y == fruttoY){
                    cout << "$";
                    }
            //Stampo gli spazi vuoti
            else {
            cout<< " ";
                }
            }
        cout << endl;
         }
    }

void logica (){

    int direz = tastiera();
    switch (direz){
        case (1): testaX--; break;
        case (2): testaX++; break;
        case (3): testaY--; break;
        case (4): testaY++; break;
    }

    disegna();

    sleep(1);
    disegna();
    logica();

}

int main (){

    setup();
    logica();

    return 0;
}
