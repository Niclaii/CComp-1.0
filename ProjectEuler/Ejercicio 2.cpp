#include <iostream>

using namespace std;

int fibonacci(int n){
  if (n<2){
    return n ;
  }
  else{
    return fibonacci(n-1) + fibonacci(n-2);
  }

}
int main(){
  int n;
  cin >> n;

  fibonacci(n);
  for (int x = 0; x <= n; x++)
    cout << fibonacci(x) <<" ";
  return 0;

}


//Fuente:https://es.stackoverflow.com/questions/104234/c-código-de-fibonacci-que-imprima-la-serie-desde-la-función-recursiva