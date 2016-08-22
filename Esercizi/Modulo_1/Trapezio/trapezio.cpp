#include <iostream>
#include <cmath> 

using namespace std; 

/*
              b_minore    
            -------
            |       *
       h    |         *      lato   
            |           *
            --------------
                b_maggiore

*/

int main(){

   float B_maggiore, b_minore, altezza, area, lato, diff, perimetro; 
   
   cout << "Questo programma calcola l'area"<<endl;  
   cout << "ed il perimetro di un trapezio rettangolo."<<endl; 
   cout << endl; 
   cout << "Inserisci la misura della base maggiore : ";
   cin >> B_maggiore; 
   cout << "Inserisci la misura della base minore   : ";
   cin >> b_minore; 
   cout << "Inserisci la misura dell'altezza        : ";
   cin >> altezza; 

   area=( B_maggiore + b_minore ) *  altezza/2.;   
   
   cout << "Il tuo trapezio ha area pari a "<< area << endl; 

   diff=B_maggiore-b_minore; 
   lato=sqrt(diff*diff + altezza*altezza); 
   perimetro= lato+B_maggiore+b_minore+altezza; 
    
   cout << "Il tuo trapezio ha perimetro pari a "<< perimetro << endl; 
   cout << "La B maggiore misura "<< B_maggiore << endl; 
   cout << "La b minore misura "<< b_minore << endl; 
   cout << "L'altezza misura "<< altezza<< endl; 
   cout << "Il lato obliquo misura "<< lato<< endl; 

   return 0; 
}
