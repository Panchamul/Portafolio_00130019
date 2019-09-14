#include <iostream>
using namespace std;

int recu();
int main()
{
	int n;
	cout << "Ingrese el valor de un numero: " << endl;
	cin >> n;

	recu();
}


int recu(int n) {
	int sum;
	if (n % 10 == 0) {
		sum = n % 10 + sum / 10;
		cout << "el numero de digitos de ese numero son: " << sum << endl;
	}
	return sum;
}
