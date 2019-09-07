#include <iostream>
using namespace std;

void calculos(int num, int *doble, int *triple ){
	*doble = 2 * num;
	*triple = 3 * num;
	
	cout<<"direccion de doble: "<<doble<<endl;
	cout<<"direccion de triple: "<<triple<<endl;
	cout<<"direccion de numero: "<<&num<<endl;
	}
	
int main()
{
	//actividad de portafolio
	int numero = 2, doble = 0, triple =0;
	
	calculos(numero, &doble, &triple);
	cout<<"el doble de 2 es: "<<doble<<endl;
	cout<<"el triple de 2 es: "<<triple<<endl;
	
	//ver las direcciones de cada una de las variables
	
	cout<<"direccion de doble: "<<&doble<<endl;
	cout<<"direccion de triple: "<<&triple<<endl;
	cout<<"direccion de numero: "<<&numero<<endl;
	
}