#include <iostream>
#include <string>

using namespace std;

int main(){

    int x;
    int y;
    int z;  
    int sumax;
    int sumay;  

    for(z = 1 ; z < 1000; z = z + 1){
        for(x = 3 ; x < 1000; x = x + 1)
            if(x % z == 0){
                sumax = x + z;
                return sumax; 
            }
            else{
                continue;
            }
    }
    for(z = 1 ; z < 1000; z = z + 1){
        for(y = 5 ; y < 1000; y = y + 1)
            if(y % z == 0){
                sumay = y + z; 
                return sumay; 
            }
            else{
                continue;
            }
    }

    cout << "la suma de los multiplos de 3 y 5 son: " << sumax + sumay;

}