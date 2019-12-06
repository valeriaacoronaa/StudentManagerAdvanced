#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <string>
#include <vector>

using std::string;
using std::vector;

class student
{
    private:
    string firstName;
    string lastName;
    double grade;
    vector <double> totalGrades;

    public:
    void setName(string, string);
    string fullName();
    
    void addGrade(double);
    double getScore();
};

#endif
