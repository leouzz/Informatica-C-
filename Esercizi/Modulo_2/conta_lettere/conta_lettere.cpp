#include <iostream>

using namespace std;

int main(){

char input[100];
char lettere[26] = {'a','b','c','d','e','f','g','h','i','l','m','n','o','p','q','r','s','t','u','v','z','x','y','k'};
int conta [26];
int pos = 0;

//Inizializzo conta
for (int a = 0; a < 26; a++){
  conta[a]=0;
}
//Ricevo input utente
do{
  cout << "Inserisci un carattere ('*' per terminare)";
  cin >> input[pos];
  pos++;
  }
while(input[pos-1]!='*' );

//Ricerca ricorrenze
for (int a = 0; a < pos; a++){
  for (int b = 0; b < 26; b++ ){
      if ( input[a]==lettere[b] ){
        conta[b]++;
      }
  }
}

// Stampa ricorrenze
for ( int a = 0; a < 26; a++){
  if(conta[a]>0){
    cout << " Ho trovato " << conta [a] << " ricorrenz";
    if (conta[a]==1){cout<<"a";}
      else{cout << "e";}

  cout << " di " << lettere[a] << endl;
  }
}


return 0;

}
