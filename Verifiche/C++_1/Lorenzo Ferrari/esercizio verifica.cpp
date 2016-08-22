#include <iostream>

using namespace std;

int main() {
    char nome [100];
    int x;	
	int y;
		cout<<" Come ti chiami? ";
    	cin>>nome;
    		cout<<" Inserisci un numero ";
    		cin>>x;
        if(x<0){x=x*(-1);}
       		cout<<" Il valore assoluto e' "<<x;
		y=x*x;
		    cout<<" Il suo quadrato e' "<<y;
		
    	

    system("pause");
	return 0;
}
