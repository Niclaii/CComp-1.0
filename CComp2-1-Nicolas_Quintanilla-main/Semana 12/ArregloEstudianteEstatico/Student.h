#ifndef __ESTUDIANTE_H__
#define __ESTUDIANTE_H__

#include <string>
#include "Point.h"
class Student {
    public:
        Student(std::string name, int id, int age);
        Student(int size);
        Student(const Student &o);

        void setAt(int index, Point value);
        Point getAt(int index) const ;
        int getSize() const ;
        void print() const ;

        ~Student();
    private:
        std::string name;        
        int id;
        int age;
};


#endif