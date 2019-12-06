#include "student.h"
#include <string>
#include <iostream>
#include <vector>

using std::string;
using std::vector;

void student::setName(string FirstName, string LastName)
{
        firstName = FirstName;
        lastName = LastName;

}

string student:: fullName()
{
        string fullName = "";
        fullName.append(firstName);
        fullName.append(" ");
        fullName.append(lastName);
        return fullName;
}

void student::addGrade(double grade)
{

        totalGrades.push_back(grade);
}

double student:: getScore()
{
        double getScore=0;
        double avg = 0;
        double sum = 0;

        for(int i=0; i<totalGrades.size(); i++)
        {
            sum = sum + totalGrades[i];
        } 

        if(totalGrades.size()!= 0)
        {
            avg = sum/totalGrades.size();
        }

        return avg;
}
