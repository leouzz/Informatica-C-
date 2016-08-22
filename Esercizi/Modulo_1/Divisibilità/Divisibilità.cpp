#include <iostream>
using namespace std;

int main(){
  int x;
  int y;
  int z;
  cout<<"inserisci un numero";
  cin>>x;
  cout<<"inserisci il divisore";
  cin>>z;
  y=x%z;
  if(y==0){cout <<"il numero e' divisibile";}
  else{cout<<"il numero non e' divisibile";}

  return 0;
}
