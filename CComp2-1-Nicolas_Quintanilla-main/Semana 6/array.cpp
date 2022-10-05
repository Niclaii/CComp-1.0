#include <iostream>

using namespace std;

int x{0};

int main(){
    int arreglo[5] = {5,4,3,80,11};
    /*arreglo[0] = 5;
    arreglo[1] = 4;
    arreglo[2] = 3;
    arreglo[3] = 80;
    arreglo[4] = 11;*/


    while (x < 5){
        cout << arreglo[x] << "," ;
        ++x;

   
}

    return 0;



}