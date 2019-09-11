//Natalia Alexandra Solorzano Paz 00120319
//Andrea Duran 00130019



#include <iostream>
#include<time.h>
using namespace std;

struct paises {
	string nombre;
	string capital;
	int habitantes;
	double prom;
};

int main() {
	string continentes[6], continentePoblado, nombreCapital;
	paises continente[6][6];
	int i, j, numPaises[6], capitalPoblada = 0, promedioTotal = 0, totalPaises = 0, totalHabitantes = 0;

	for (i = 1; i < 6; i++)
	{
		cout << "Ingrese el nombre del continente " << i << endl;
		cin >> continentes[i];
		cout << "Ingrese el numero de paises del continente " << continentes[i] << endl;
		cin >> numPaises[i];

		for (j = 1; j < numPaises[i] + 1; j++)
		{
			cout << "Ingrese el nombre del pais " << j << endl;
			cin >> continente[i][j].nombre;
			cout << "Ingrese el nombre de la capital " << j << endl;
			cin >> continente[i][j].capital;
			cout << "Ingrese el numero de habitantes " << j << endl;
			cin >> continente[i][j].habitantes;
			cout << "Ingrese el promedio de edad de los habitantes: " << j << endl;
			cin >> continente[i][j].prom;
		}
	}