#include "student.h"
#include <string>
#include <iostream>
#include <vector>

void student::setName(std::string first, std::string last)
{
        //student=firstName+" "+lastName;
        firstName = first;
        lastName = last;
}
std::string student::fullName()
{
        std::string studentName;
        studentName = firstName+" "+lastName;
        
        return studentName;
}

void student::addGrade(double grade)
{
    scores.push_back(grade);
}

double student::getScore()
{
    double scoreSum = 0;
    double totalScore;
    for(int i=0; i<scores.size();i++)
    {
        scoreSum += scores[i];
    }
    if(scores.size()!=0)
    {
        totalScore= scoreSum/scores.size();
        
        return totalScore;
    }
    else
    {
        return 0;
    }

}
