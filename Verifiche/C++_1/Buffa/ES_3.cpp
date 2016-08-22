#include <iostream>
using namespace std;



int main() 
{
	char variabile;
	int conta=1;
	cout<<"ciao utente caro, vediamo se indovini la lettera a cui sto pensando"<<endl;
	cin>>variabile;
	while('w'!=variabile)
	{
		   if('w'==variabile)
		   { 
		      cout<<"hai indovinato la lettera, bravo!!"<<endl;
		   }
		   else
		   {
		   	  cout<<"non hai indovinato la lettera, fai schifo! ma riprova dai!!"<<endl;
		   	  cout<<"inserisci un altra lettera"<<endl;
		   	  cin>>variabile;
		   }
		   conta=conta+1;
		   	   
	}
	cout<<"hai fatto "<<conta<<" tentatinvi, tenendo conto che le lettere sono 26 fai le tue considerazioni"<<endl;
	return 0;
}
