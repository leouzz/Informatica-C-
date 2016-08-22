#include <iostream>
using namespace std;

int main() {
	char nome[30];
	int x;
	int y;
	cout<<" Qual'e' il tuo nome?";
	cin>>nome;
	cout<<"Inserisci un numero "<<nome<<": ";
	cin>>x;
	if(x<0){y=x*-1;
	cout<<"il valore assoluto e': "<<y;}
	if(x>=0){cout<<"il valore assoluto e': "<<x;}
	return 0;
}
