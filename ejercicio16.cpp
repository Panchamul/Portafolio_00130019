/******************************************************************************
//Ejercicio 2 Andrea Duran 00130019
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
 int arreglo[10];
 int n;
 double suma, prom;
 
 
 for(int i = 0; i<=9; i++){
    cout<<"Ingrese numeros enteros: "<<endl;
    cin>>arreglo[n];
    suma = suma + arreglo[n];
     
 }
 
    prom = suma/10;
    
    cout<<"La suma de los datos es de: "<<suma<<endl;
    cout<<"El promedio de los datos es de: "<<prom<<endl;

    return 0;
}
