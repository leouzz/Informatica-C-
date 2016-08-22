#include <iostream>
using namespace std;

int main() {

    char nome[50];
    int n, val_ass, quadrato;

    cout << "Ciao come ti chiami? " ;
    cin >> nome ;

    cout << "Ciao "<< nome << " inserisci un numero e ti calcolo il val assoluto e il quadrato : " ;
    cin >> n; 

    if (n > 0){
        val_ass = n;
    }
    else if ( n < 0 ){
        val_ass = - n;
    }

    quadrato = val_ass * val_ass;

    cout << endl << " il valore assoluto è: " << val_ass << endl << "Il quadrato di " << n << " è: " << quadrato << endl ; 

    return 0;

}

