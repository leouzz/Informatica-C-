#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
    
    int n_magico, tentativo, num_tenta, tenta_max;

    srand (time(NULL)); // Genero il seme per il numero random
    n_magico = rand() % 100 + 1; //Numero Random tra 1 e 100 compresi

    tentativo = 0;
    num_tenta = 0;
    tenta_max = 10;

    do{
        num_tenta++;
        cout << "Indovina il numero: " ;
        cin >> tentativo;
        
        if ( n_magico != tentativo ){
            if (n_magico < tentativo ){
                cout << "Il numero da indovinare è più piccolo"<< endl;                
                }
            else{
                cout << "Il numero da indovinare è più grande" << endl;
                }
            }
    }
    while(num_tenta != tenta_max && n_magico != tentativo ); 

    if (num_tenta != tenta_max){
        cout << "Hai Indovinato !! in soli " << num_tenta << " tentativi";
        }
    else {
        cout << "Mi dispiace hai utilizzato tutti e " << tenta_max << " tentativi";
        }

    return 0;
 }
