#ifndef INSTRUCTOR__H_INCLUDED
#define INSTRUCTOR__H_INCLUDED
using namespace std;
#include <iostream>
#include <string>
#include "Person.h"

class Instructor : public Person {
private:
    string department;
    int experienceYears;
public:
    void display();


};


#endif // INSTRUCTOR__H_INCLUDED
