#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cstdlib>

using namespace std; 

int main(){
   float a,b;
   char scelta;
  
   cout << "Dimmi la misura: "; 
   cin >> a ;
   cout<< "La misura precedente e' espressa in pollici o centimetri (p/c)?";
   cin >> scelta; 
   if(scelta=='p' || scelta=='P'){
      b=a*2.54;
      cout << b << " cm = "<<a << " pollici"<<endl;
   }
   else if(scelta=='c' || scelta=='C') {
      b=a/2.54;
      cout << a << " cm = "<<b << " pollici"<<endl;
   }
   

   return 0; 
}

