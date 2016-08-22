#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cstdlib>

using namespace std; 

int main(){
   int x,max,min,num,numricorda;
   float somma, media;
   char nome[50]; 
  
   num=0;
   somma=0;
   
   cout << "Buongiorno! come ti chiami? "; 
   cin >> nome; 

   cout << nome << " dimmi quanti numeri vuoi inserire: " ;  
   cin >> num ; 
   numricorda=num;
   
   while(num>0){
      cout << nome << " dimmi un numero "; 
      cin >> x ; 
      if( x>max) max=x;
      if( x<min) min=x;
      num=num-1;
      somma=somma+x;
   }  
   
   media= somma/numricorda;
   
   cout << "Hai inserito "<<numricorda<<" numeri" <<endl;
   cout << "Il massimo e' "<< max << endl;
   cout << "Il minimo e' "<< min << endl;
   cout << "La somma e' "<< somma << endl;
   cout << "La media e' "<< media << endl; 

   return 0; 
}

