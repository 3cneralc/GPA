#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student{
    
private:
    string studentName;
    string attemptedModule;
    char grade;
    int score;
    int creditUnits;
public:
    Student();
    
    void setStudentName(string studentName);
    string getStudentName();
    
    void setAttemptedModule(string attemptedModule);
    string getAttemptedModule();
    
    void setGrade(char grade);
    char getGrade();
    
    void setScore(int score);
    int getScore();
    
    void setCreditUnits(int creditUnits);
    int getCreditUnits();
};