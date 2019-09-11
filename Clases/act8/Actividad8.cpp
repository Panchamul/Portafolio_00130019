#include <iostream>
#include <stdlib.h>
using namespace std;

//Tipos de datos que contendra la pila
struct TPila{
	float datos[100];
	int top;
};
typedef struct TPila PilaO;

//Creando una pila vacia
void initialize(PilaO *s){
	s->top = -1;
}

//Devuelve cierto si la pila esta vacia
bool empty(PilaO* s){
	return s->top < 0;
}

//Añade elementos a la pila
void push(PilaO* s, float e){
	if (s->top < 99) {
		(s->top)++;
		s->datos[s->top] = e;
	}
}

//Retira los elementos de la pila
void pop(PilaO* s, float* e){
	if (s->top >= 0) {
		*e = s->datos[s->top];
		(s->top)--;
	}
}

//Funcion para otener el valor de la pila dejandola vacia
float obtenerFondo(PilaO* s){

	if (empty(s))
		return -1;
	float a = 0, b = 0;
	pop(s, &b);
	if (empty(s))
		return -1;
	pop(s, &a);
	push(s, b);
	push(s, a);
	

	return a;
}

float FondoNormal(PilaO *pilaA) {
	PilaO* pilaB;
	initialize(pilaB);

	float valores = 0;

	while (!empty(pilaA)) {
		pop(pilaA, &valores);
		push(&pilaB, valores);
	}

	float fondo = valores;

	while (!empty(pilaB)){
		pop(&pilaB, &valores);
		push(pilaA, valores);
	}

	return fondo;
}


int main()

{

	PilaO unapilao;
	initialize(&unapilao);


	push(&unapilao, 1.2);
	push(&unapilao, 3.4);
	


	float fondo = obtenerFondo(&unapilao);
	cout << "Fondo:" << fondo << endl;



}
