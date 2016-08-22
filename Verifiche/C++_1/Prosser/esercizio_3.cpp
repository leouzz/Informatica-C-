#include <iostream>

using namespace std;

int main() {
	
	int BONUS;
	char letteramist;
	letteramist='p';
	char lettera;
	lettera='a';
	
	while(lettera!=letteramist){
		
		cout<<"inserisci una lettera e io proverò ad indovinarla:"<<endl;
		cin>>lettera;
		BONUS++;
		
		if(lettera==letteramist){
			cout<<"hai indovinato in:"<<BONUS<<"tentativi"<<endl;
			
			
		}
		else{
			cout<<"hai sbagliato, riprova"<<endl;
		}
		
		
		
	}
	
	
	return 0;
}
