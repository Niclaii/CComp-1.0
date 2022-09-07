#include <iostream>
#include <string>
 
using namespace std;

class Account{
    int Cuenta{0};
    Account(int nombreCuenta,int retiro)
    :Cuenta{nombreCuenta}{
        if (nombreCuenta>0){
            nombreCuenta = true;}
        else
        {
            nombreCuenta = false;
        }
        }

    void retiro(int RetirarCantidad){
        if (RetirarCantidad > Cuenta){
            cout << "No cuenta con saldo suficiente para retirar" << endl;
            }
        
        else{
            Cuenta - RetirarCantidad;
            } 
        };
};