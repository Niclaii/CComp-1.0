#include "Student.h"

Student::Student(std::string name, int id, int age) {
    this->name = name;
    this->age = age;
    this->id = id;
}

Student::Student(int size) {
    data = new Point[size];
    this->size = size;
}

Student::Student(const Student &o) {
    size = o.size;
    data = new Point[o.size];
    for(int i = 0; i < size; i++)
        data[i] = o.data[i];
}

void Student::setAt(int index, Point value) {
    if(index >= 0 && index < size)
        data[index] = value;
}

Point Student::getAt(int index) const {
    if(index >= 0 && index < size)
        return data[index];            
}

int Student::getSize() const {
    return size;
}

void Student::print() const {
    for(int i = 0; i < size; i++)
        std::cout << data[i] << " ";
    std::cout << std::endl;
}

Student::~Student() {
    delete [] data;
}

std::ostream& operator<<(std::ostream &output, const Student &p) {
    for(int i = 0; i < p.size; i++)
        output << p.data[i] << " ";
    return output;
}