#include <iostream>
using namespace std;

int main() {
	int x,y;
	cout<<"inserisci un numero: ";
	cin >> x ;
	y = x;
	while (x>1){
		x--;
		y=x*y;
	}

	cout<< "il fattoriale del numero inserito e': " <<y <<endl;

return 0;	
}
