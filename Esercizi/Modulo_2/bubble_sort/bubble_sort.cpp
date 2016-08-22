#include <iostream>

using namespace std;

int main(){

int n;
bool trigger = true;

cout << "Inserisci grandezza array";
cin >> n;

int input [n];

//Ricevo valori in ingresso
for (int a = 0; a < n ; a++){
  cout << "Inserisci Valore ";
  cin >> input[a];
}

//Applico l'algoritmo di ordinamento
while(trigger){

  trigger = false;
  for (int b = 0; b < n-1; b++){

      if (input[b] > input[b+1]){
        int z = input[b];
        input[b] = input[b+1];
        input[b+1] = z;
        trigger = true;
        }
      }
    }

//Stampo l'array ordinato
for(int b=0; b<n;b++){

cout << input[b] << " " ;

}

cout << endl;

return 0;

}
