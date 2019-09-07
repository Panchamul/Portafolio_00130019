#include <iostream>
#include <math.h>

using namespace std;
//llamando la funcion
float mediana(float a[], int tam);

int main()
{
	int cant, cont;
	float num;
	
	cout<<"ingrese la cantidad de numeros a evaluar"<< endl;
	cin>>cant;
	cont = cant;
	float n2[cant];
	cout<<"ingrese los numeros"<<endl;
	while(cont > 0){
		cont --;
		cin>> num;
		n2[cont] =num;
		}
		
		cout << "la mediana es: " << mediana(n2, cant)<<endl;
	
}

//creando la funcion
float mediana( int a[], int tam){
	int po;
	float m;
	
	//verificando que el arreglo sea par o impar
	if(tam%2 ==0){
		 po= tam/2;
		 m=(a[po-1] + a[po])/1;
		 //si es par debera sumar los 2 numeros centrales y dividirlos 
	}else{
		po = ceil(tam/2);
		m = a[po];
		}
		
		return m;
	}