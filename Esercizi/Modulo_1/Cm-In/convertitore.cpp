#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cstdlib>

using namespace std; 

int main(){
   float a,b; 
  
   cout << "Dimmi la misura in cm "; 
   cin >> a ;
   b=a/2.54;
   
   cout << a << " cm = "<<b << " pollici"<<endl;

   return 0; 
}

