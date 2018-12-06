#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <iostream>
#include <string>
#include <vector>

class student
{
        private:
        std::string firstName;
        std::string lastName;
        std::vector <double> scores;
        double totalScore;

        public:
        void setName(std::string,std::string);
        
        std::string fullName();

        void addGrade(double);

        double getScore();
        
};

#endif
