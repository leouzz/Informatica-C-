#include <iostream>
using namespace std;

int main(){

int asterischi, x ,spazi;

cout << "Inserisci numero di asterischi da stampare: ";
cin >> asterischi;

cout << "-> Stampa Orizzontale :" << endl;
x = asterischi;
while (x > 0){
    cout << "*";
    x--;    
}

cout << endl << endl;
cout << "-> Stampa Verticale :" << endl;
x = asterischi;
while (x > 0){
    cout << "*" << endl;
    x--;
}

cout << endl << endl;
cout << "-> Stampa obliqua da dx a sx :" << endl;
x = asterischi;

while (x > 0){
    //Stampo gli spazi
    int spazi = x-1;
    while (spazi > 0){
        cout << " ";
        spazi--;
     }
    cout << "*" << endl;
    x--;
}

cout << endl << endl;
cout << "-> Stampa obliqua da sx a dx :" << endl;
x = asterischi;

while (x > 0){
    //stampo gli spazi
    int spazi = asterischi - x;
    while (spazi > 0 ){
     cout << " ";
     spazi --;
    }
cout << "*" << endl;
x--;
}

cout << endl << endl;

return 0;

}



