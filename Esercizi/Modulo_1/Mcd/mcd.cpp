#include<iostream>
#include<cstdlib>

using namespace std;

int a,b,r;
int main(){
  int a,b,r,c,MCD,i;
  cout << "Dimmi un numero: ";
  cin >> a;
  cout << "Dimmi un altro numero: ";
  cin >> b;


  //cerco il primo divisore di tutti 2, il piu' grande
  i=a;
  while( !( a%i==0 && b%i==0) ){
     i=i-1;
  }

  MCD=i;

  cout <<"L'MCD fra ("<<a<<", "<<b<<") vale "<< MCD<< endl;

  return 0;
}
