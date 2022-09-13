#include <iostream>
#include <string>

using namespace std;

class MotorVehicle{
    
    public:
        MotorVehicle(string motorvehicle, string fuelType, 
        int yearofManufacture, string color, int engineCapacity);
            
        void Setmodel(string motorvehicle){
            modelo = motorvehicle;
        }

        string Getmodelo() const{
            return modelo; 
        }

        void SetFuelType(string fuelType){
            Fuel = fuelType;
        }

        string GetFuelType() const{
            return Fuel;
        }

        void SetyearofManufacture(string yearofManufacture){
            año = yearofManufacture;
        }

        string Getaño() const{
            return año;
        }

        void SetColor(string color){
            color1 = color;
        }
        string getColor() const{
            return color1;
        }

        void GetEngine(string engineCapacity){
            capacidad = engineCapacity;
        }
        string getCapacidad() const{
            return capacidad;
        }

        void displayCarDetails(string Display){
            cout << "member name: " << modelo << endl;
            cout << "Fuel type: " << Fuel << endl;
            cout << "Year of manufacture: " << año << endl;
            cout << "Color: " << color1 << endl;
            cout << "Engine capacity: " << capacidad << endl;

        }


    private:
        string modelo;
        string Fuel;
        string año;
        string color1;
        string capacidad;
};

