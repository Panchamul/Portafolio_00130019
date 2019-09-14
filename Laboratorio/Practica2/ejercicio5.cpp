#include <iostream>
using namespace std;

void Pasos(int disco, int to1, int to2, int to3) {
	if (disco == 1) {
		cout << "Mover disco de torre " << to1 << " hacia la torre " << to3 << endl;
	}
	else {
		Pasos(disco - 1, to1, to3, to2);
		cout << "Mover disco de torre " << to1 << " hacia la torre " << to3 << endl;
		Pasos(disco - 1, to2, to1, to3);
	}

}

int main()
{
	int T1 = 1, T2 = 2, T3 = 3, Disco = 0;
	cout << "Con cuantos discos desea jugar: ";
	cin >> Disco;

	Pasos(Disco, T1, T2, T3);

	return 0;
}

