// ejercicio26.cpp Andrea Duran 00130019

#include <iostream>
using namespace std;

struct complejo {
	string real;
	string imaginaria;
};

int main()
{
	struct complejo guardar;

	cout << "Ingrese la parte real del numero complejo: " << endl;
	cin >> guardar.real;
	cout << "Ingrese la parte imaginaria del imaginaria complejo con su signo: " << endl;
	cin >> guardar.imaginaria;

	if (guardar.imaginaria[0] == '+') {
		guardar.imaginaria[0] = '-';
	}
	else {
		guardar.imaginaria[0] = '+';
	}
	std::cout << "el cojudao del numero complejo es:" << guardar.real << " " << guardar.imaginaria << std::endl;


	return 0;
}


