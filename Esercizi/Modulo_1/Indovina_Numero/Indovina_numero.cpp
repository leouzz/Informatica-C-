#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std; 
int main(){
    int xmin,xmax,x;     
    char op;
    
    xmin=1; 
    xmax=100; 
    cout<< "Pensa un numero fra "<<xmin<<" e "<<xmax<< endl;

    do{
       x=(xmin+xmax)/2; 
       cout <<"E' maggiore di "<<x<<" ? (s/n) ";          
       cin >> op; 
       if(op=='s'){
         xmin=x+1;
       }
       else{
         xmax=x;   
       }           
    }while(xmin!=xmax);        
    cout << "Il numero pensato e'  "<< xmin << endl; 
    system("pause"); 
    return 0; 
}
