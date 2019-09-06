/******************************************************************************
Ejercicio 8 Andrea Duran 00130019
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void Conteo(int x, int y);
int main(void)
{
   int c;
   int cont = 0;
   cout<<"Ingrese un numero: "<<endl;
   cin>> c;
   
   Conteo(c, cont);
}
void Conteo(int x, int y){
    
    y++;
    if(x==y){
        cout<<y;
    }else{
        cout<<y;
        Conteo(x,y);
        cout<<y;
    }
}