#include <iostream>

using namespace std;

int main(){

int n, primo, ultimo ;

cout << "Quanti valori vuoi inserire? ";
cin >> n;

int array[n];

for (int a=0; a<n ;a ++){
cout << "Inserisci valore :";
cin >> array[a];
}

cout << "L'array giusto e': " << endl;

for (int a=0; a<n ;a ++){ 
cout << array[a] << " " ;

}

cout << endl;


for (int a=0; a<n/2 ;a ++){
 primo = array[a];
    int pos = (n -1)-a;
 ultimo = array[pos]; 
 array[a] = ultimo;
 array[pos] = primo;

}

cout << "L'array invertito e': " << endl;

for (int a=0; a<n ;a ++){ 
cout << array[a] << " " ;

}

cout << endl;

return 0;
}
