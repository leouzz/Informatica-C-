#include <iostream>   // Inclusione di librerie, quindi di funzionalità aggiuntive che si possono utilizzare nel nostro programma
#include <cmath>      // Libreria di funzioni matematiche
using namespace std;

int main(){             // Apertura della funzione principale, la pima che esegue il nostro programma quando viene avviato, 
                        // è obbligatorio un main in un programma c+
	int n, i, conta;    // Dichiaro due variabili di tipo int (possono contenere valori interi)

	cout << “Inserire un numero> “; // istruzione di output: stampo a video " Inserire un numero"
	cin >> n;                       // istruzione di input: assegno alla variabile n un valore da tastiera

	i = 1;                          // Assegno alla variabile i il valore 1 
	conta = 0;                      // Assegno alla variabile conta il valore 0 
	while(i <= n){                  // Ciclo di tipo while che eseguo fintanto che la variabile i è minore uguale di n 

		if ( n%i == 0) {            // Condizione di tipo if ( se la variabile i è divisore di n 
			cout << i << “ è divisore di “ <<  n << endl ;  // istruzione di output, dichiaro che la variabile i è divisore di n 
			conta = conta+1;         // Incremento la variabile conta solo se i è divisore di n 
			}
		i = i+1;                    // Incremento i
		}                       // In sostanza all'interno del while controllo se i valori tra 0 e il numero inserito dividono il numero stesso
                                // la variabile conta è il contatore dei divisori trovati. 

            
	cout << n << “ ha “ << conta << “ divisori “ << endl;  // istruzione di output: stampo a video il numero di divisori della variabile n; 

	if (conta == 2 ) { cout << n << “ è un numero primo “ << endl; } // Se i divisori del numero allora il numero inserito è un numero primo 
	else { cout << n << “ NON è un numero primo “ << endl; }  // Se NO, non è un numero primo 

	return 0;                   // Istruzione per chiudere il progamma. 
}
