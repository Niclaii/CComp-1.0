#include <iostream>

using namespace std;

int main(){

  unsigned int x;
  unsigned int sum3;
  unsigned int sum5;

  for (x = 1; x < 1000 ; ++x ){
    if (x%5==0){
        sum5 = x+x;
        }
  }
  for (x = 1; x < 1000 ; ++x ){
    if (x%3==0){
        sum3 = x+x;
        }
    }  
    cout << sum5+sum3<< endl;
  }
  

