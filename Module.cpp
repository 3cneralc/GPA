#include <string>
#include "Module.h"

using namespace std;

Module::Module(){}

void Module::setSubject(string name) {
    subject = name;
}

string Module::getSubject() {
    return subject;
}

void Module::setSubjectCode(string code) {
    subjectCode = code;
}

string Module::getSubjectCode() {
    return subjectCode;
}

void Module::setSubjectWeight(int weight) {
    subjectWeight = weight;
}

int Module::getSubjectWeight() {
    return subjectWeight;
}

void Module::pushSubjectStringToVector(vector<string>subjectName) {
    for (int vec = 0; vec <(int)subjectName.size(); vec++) {
        subName.push_back(subjectName[vec]);
    }
}

void Module::pushSubjectCodeToVector(vector<string>subjectCode) {
    for (int vec = 0; vec <(int)subjectCode.size(); vec++) {
        subCode.push_back(subjectCode[vec]);
    }
}

void Module::pushSubjectCreditUnitsToVector(vector<int>credits) {
    for (int vec = 0; vec <(int)credits.size(); vec++) {
        subWeight.push_back(credits[vec]);
    }
}

