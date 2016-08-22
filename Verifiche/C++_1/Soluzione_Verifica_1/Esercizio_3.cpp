#include <iostream>
using namespace std;

int main() {

    char magico = 'k', lett = ' ';
    int tentativi;
    
    cout << " Ciao prova a indovinare la lettera magica! " << endl ;
    cin >> lett;
    tentativi = 1;

    while (lett != magico){
        cout << " Ritenta sarai più fortunato: " ; 
        cin >> lett;
        tentativi ++;
    }

    cout << " Bravo hai indovinato ! In solo " << tentativi << " tentativi";
    
    return 0; 
}
