#include <iostream>

using namespace std;

int main(){
    /*int x = 100;

    int &rf = x;

    cout << rf << endl;
    rf++;
    cout << x << endl;
    cout << x++ << endl;
    cout << ++rf << endl;*/

    Point pl(5,6);
    Point &ref = p1;

    // cout << p1 << endl; // ERROR
    p1.print();

    
    return 0;
}