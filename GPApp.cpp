#include <iostream>
#include <string>
#include "Module.h"

using namespace std;

int main(){
    
    Module mod;
    
    string name;
    string code;
    string str;
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
    
    return 0;
}