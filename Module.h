#ifndef MODULE_H
#define MODULE_H

#include <vector>
#include <string>
using namespace std;

class Module{
private:
    string subject;
    string subjectCode;
    int subjectWeight;
    
    vector<string> subName;
    vector<string> subCode;
    vector<int> subWeight;
    vector<pair<string,int> > module;
    
public:
    Module();
    
    void setSubject(string subject);
    string getSubject();
    
    void setSubjectCode(string subjectCode);
    string getSubjectCode();
    
    void setSubjectWeight(int subjectWeight);
    int getSubjectWeight();
    
    void pushSubjectStringToVector(vector<string>subjectName);
    void pushSubjectCodeToVector(vector<string>subjectCode);
    void pushSubjectCreditUnitsToVector(vector<int>credits);
};
#endif