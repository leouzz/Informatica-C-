#include <iostream>

using namespace std;

int main() {
	char nome[50];
	int numero;
	numero=0;
	int risultato1;
	int risultato2;
	risultato1=0;
	risultato2=0;
	cout<<"come ti chiami?";
	cin>>nome;
	cout<<"ora,"<<nome<<"inserisci un numero:"<<endl;
	cin>>numero;
	if (numero<0){
		risultato1=numero*(-1);
		cout<<"il valore assoluto del numero è:"<<risultato1<<endl;
		
	}
	else {
		risultato1=numero;
		cout<<"il valore assoluto del numero è:"<<risultato1<<endl;
	}
	risultato1=numero;
	risultato2= numero*numero;
	
	cout<<"il quadrato del numero è"<<risultato2;
	
	
	

	
	return 0;
}
