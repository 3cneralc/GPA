#include <iostream>
#include <string>
#include "Module.h"
#include "Student.h"

using namespace std;

int main(){
    
    Module mod;
    Student stud;
    
    string name;
    string code;
    string str;
    
    char grade;
    
    int cu;
    
    vector<string>sName;
    vector<string>sCode;
    vector<int>sCU;
    
    cout << "Enter Name of Module: ";
    getline(cin,name);
    mod.setSubject(name);
    sName.push_back(name);
    mod.pushSubjectStringToVector(sName);
    
    cout << "Enter Module Code: ";
    getline(cin,code);
    mod.setSubject(code);
    sCode.push_back(code);
    mod.pushSubjectCodeToVector(sCode);
    
    cout << "Enter Number of Credit Units: ";
    getline(cin,str);
    cu = stoi(str);
    mod.setSubjectWeight(cu);
    sCU.push_back(cu);
    mod.pushSubjectCreditUnitsToVector(sCU);
    
    cout << "Enter Student Name: ";
    getline(cin,name);
    
    cout << "Enter Module Subject: ";
    getline(cin,name);
    
    cout << "Enter Grade: "
    getline(cin, grade);
    
    
    return 0;
}