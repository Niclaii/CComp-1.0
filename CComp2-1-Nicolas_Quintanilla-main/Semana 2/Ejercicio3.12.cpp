#include <iostream>
#include <string>

using namespace std;

class Date{

    public:

        Date(int day, int month, int year)
            :mes{month}{
                if (0 < month < 12){
                    month = 1;
                }
            }

        int setDay(int day){
            dia = day;
        }

        int getDay()const{
            return dia;
        }

        int setMonth(int month){
            mes = month;
        }

        int getMonth()const{
            return mes;
        }

        int setYear(int year){
            año = year;
        }

        int getYear()const{
            return año;
        }


        void displayDate(int display){
            cout << dia << "/" << mes << "/" << año << endl;
        }

    private:

        int dia{0};
        int mes{0};
        int año{0};
};