//Natalia Alexandra Solorzano Paz 00120319
//Andrea Chamul 00130019

#include<iostream>
using namespace std;

int suma(int b, int a) {
	if (b == 1) {
		cout << "b=" << b << " caso base"
			<< endl;
		return 1;
	}
	else {
		
		return a + suma(a, b - 1);		

	}
}



int main()
{
	
	int sm = suma(5, 4);
	cout << "Resultado: " <<sm<< endl;

	
	
}