#include <string>
#include "Student.h"
using namespace std;

Student::Student(){}

void Student::setStudentName(string name) {
    studentName = name;
}

string Student::getStudentName() {
    return studentName;
}

void Student::setAttemptedModule(string moduleAttempted) {
    attemptedModule = moduleAttempted;
}

string Student::getAttemptedModule(){
    return attemptedModule;
}

void Student::setGrade(char g){
    grade = g;
}

char Student::getGrade() {
    return grade;
}

void Student::setScore(int s) {
    score = s;
}

int Student::getScore() {
    return score;
}

void Student::setCreditUnits(int cu) {
    creditUnits = cu;
}

int Student::getCreditUnits() {
    return creditUnits;
}