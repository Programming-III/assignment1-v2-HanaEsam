#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
using namespace std;
#include <iostream>
#include <string>
#include "Person.h"

class student: public Person {

private:
    int yearLevel;
    string major;

public:
    void setYear(int x);
    void setMajor(string m);
    string getMajor();
    int getYL();


};


#endif // STUDENT_H_INCLUDED
