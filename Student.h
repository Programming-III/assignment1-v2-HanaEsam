#ifndef STUDENT__H_INCLUDED
#define STUDENT__H_INCLUDED
using namespace std;
#include <iostream>
#include <string>
#include "Person.h"

class Student: public Person {

private:
    int year;
    string major;


};


#endif // STUDENT__H_INCLUDED
