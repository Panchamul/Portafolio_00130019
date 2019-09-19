#include<iostream>
#include<stack>
#include<string.h>
using namespace std;

int main()
{
	stack<string> s;
	s.push("Asia");
	s.push("America");
	s.push("Europa");
	s.push("Oceania");
	s.push("Africa");
	
	cout<<"Continentes ingresados: "<< s.size() << endl;
	cout<<"El ultimo continente que fue ingresado es: "<<s.top()<<endl;
	
	//eliminando datos de la pila
	s.pop();
	s.pop();
	
	cout<<"La cantidad de datos que quedan en la pila es de: "<<s.size()<<endl;
	
	if(s.empty()){
		cout<<"La pila esta vacia, no hay continentes"<<endl;
	}else
	cout<<"La pila posee datos"<<endl;
	
	return 0;
}