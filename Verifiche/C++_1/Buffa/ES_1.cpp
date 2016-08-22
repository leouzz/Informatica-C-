#include <iostream>
using namespace std;


int main() 
{
	int x;
	char nome[50];
	cout<<"ciao, come ti chiami?"<<endl;
	cin>>nome;
	cout<<"ciao " <<nome<<" inserisci un numero che ti piace"<<endl;
	cin>>x;
	if(x>0) 
	{
	    cout<<"il valore assoluto del tuo numero e' "<<x<<endl;
	    x=x*x;
	    cout<<"il quadrato del tuo numero e'"<<x<<endl;
	}
	else 
	{
	    x=(-1*x);
	    cout<<"il valore assoluto del tuo numero e' "<<x<<endl;
	    x=x*x;
	    cout<<"il quadrato del tuo numero e'"<<x<<endl;	
	}
	
	

	return 0;
}
