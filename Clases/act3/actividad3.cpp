#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
	int matriz[10][20];

	//llenando matriz
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 20; j++) {
			matriz[i][j] = 1 + rand() % 10;
		}
	}

	//Imprimiendo matriz
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 20; j++) {
			cout<< setw(3) << matriz[i][j] <<" ";
		}cout << endl;
	}
	
	cout << "************************************************************************************************" << endl;
	cout << "Direccion de m[0][0]: "<<*((matriz + 0) + 0)  << endl;
	cout << "Direccion de m[2][1]: "<< *((matriz + 2) + 1) << endl;
	cout << "Direccion de m[5][1]: " << *((matriz + 5) + 1) << endl;
	cout << "Direccion de m[1][10]: " << *((matriz + 1) + 10) << endl;
	cout << "Direccion de m[2][10]: " << *((matriz + 2) + 10) << endl;
	cout << "Direccion de m[5][3]: " << *((matriz + 5) + 3) << endl;
	cout << "Direccion de m[9][19]: " << *((matriz + 9) + 19) << endl;


	/*Parte 2
	De las expresiones solo la  primera *(*matrix) y la tercera *(*(matrix + i) + j) son validas dado que ambas 
	permiten imprimer los valores exactos en esas posiciones
	*/





}
