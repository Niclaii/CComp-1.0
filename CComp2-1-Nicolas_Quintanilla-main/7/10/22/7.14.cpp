#include <iostream>
#include <string>
#include <array>
#include <iomanip>

using namespace std;

class GradeBook{
    public:
        static const size_t students{10};

        GradeBook(const std::string& name,
        const std::array<int, students>& gradesArray) : courseName{name}, gardes {gradesArray}{

        }

        void setCourseName(const std:: string& name){
            courseName = name;
        }
        const std::string& getCourseName()
}   