#include <iostream>
#include <string>
#include "Point.h"

using namespace std;


void printArray(const Point *array,int tam){
	cout << "[ ";
	for (int i = 0; i < tam ;i++ , array++){
			array->print();
		cout << " ]" << endl;
	}

}


int main() {

	Point p;
	Point p1(123,123);
	Point p2(12,5);
	Point p3(2,15);
	Point p4(10,8);
	Point p5(7,8);
	

	Point *arreglo = new Point[5];
	arreglo[0] = p1;
	arreglo[1] = p2;
	arreglo[2] = p3;
	arreglo[3] = p4;
	arreglo[4] = p5;

	int tam = sizeof(arreglo) / sizeof(arreglo[0]);

	Point *ptr = arreglo;

	for (int i = 0; i< tam;i++,ptr++){

		ptr ->print();
	}

	ptr = &p;

	ptr->print();
	
	return 0;




}