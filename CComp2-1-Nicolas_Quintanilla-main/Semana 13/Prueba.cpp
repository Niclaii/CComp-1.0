#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main(){

    ifstream source("source-file.txt");
    ofstream destination("dest-file.txt");
    char x;
    
    while(source.get(x)){
        destination<<x;
    }
    if(source.eof())
        cout<<"[EoF reached]\n";
    else
        cout<<"[error reading]\n";

    source.close();
    
    return 0 ;
}