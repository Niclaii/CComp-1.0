#include <iostream>
using namespace std;
/*int* ptr, contador; // así se declara un puntero.
//Ejemplo
int y{ 5 };
int* yPtr(nullPtr) // -> se declara el puntero.
yPtr = &y // asigna la direccion de y a yPtr
*/

/*
Cuando tiene nullptr "apunta a nada" es nulo. Antes se ponía que era NULL o = a 0.
Cuando en el puntero se ve * en un puntero es para declararlo.



Operador &: Operador de dirección. (unario) Obtiene la direccion de memoria de la variable.

*/

int main() {

	int y{ 100 };

	int* yPtr{ nullptr };

	yPtr = &y;

	cout << yPtr << endl;
	cout << &y << endl;

	cout << *yPtr << endl;
	*yPtr = 1000;
	cout << y << endl;

	return 0;
}


// lvalue se refiere a una posicion de memoria que identifica un objeto.
//operacion de indirección: Operador unario , operador de referencia.sin, retorna un lvalue. Obtiene el valor de la variable a traves del puntero. 
// Ejemplo: cin >> *yPtr

//LO QUE NO SE HACE : int *ptr; *ptr=100 NOO SE HACE

