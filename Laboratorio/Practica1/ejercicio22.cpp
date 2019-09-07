// ejercicio22 Andrea Duran 00130019

#include <iostream>
using namespace std;

int main()
{
	int matrix[5][5] = { 0 };

	cout << "Ingrese los numeros necesarios para completar la matriz" << endl;

	cin >> matrix[0][0];
	cin >> matrix[0][1];
	cin >> matrix[1][0];
	cin >> matrix[1][1];
	cin >> matrix[1][2];
	cin >> matrix[2][1];
	cin >> matrix[2][2];
	cin >> matrix[2][3];
	cin >> matrix[3][2];
	cin >> matrix[3][3];
	cin >> matrix[3][4];
	cin >> matrix[4][3];
	cin >> matrix[4][4];

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << matrix[i][j];
			cout << "|";

		}
		cout << endl;
	}
	return 0;
}

