#include <iostream>

using namespace std; 

int main(){
float media;
float val,somma=0,min,max=0;

cout << "Ciao quanti valori vuoi inserire?" ;
cin >> val; 

float vett[val]; 

for(int a=0; a<val; a++){
cout << "Inserisci un voto ";
cin >> vett[a];
}

for (int a=0; a<val; a++){

if (vett[a]>max) max = vett[a];
if (vett[a]<min) min = vett[a];
somma += vett[a];
}

media = somma/val; 
cout << somma << endl;
cout << " La media è: " << media << endl;
cout << " IL valore minimo è: " << min << endl;
cout << " Il valore massimo è: " << max << endl;

return 0; 

}
