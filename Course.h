#ifndef COURSE_H_INCLUDED
#define COURSE_H_INCLUDED
using namespace std;
#include <iostream>
#include <string>
#include "student.h"


class Course{
private:
    string courseCode;
    string courseName;
    int maxStudents;
    student* students;
    int currentStudents;
public:
     void addStudent(const student& s);
    void displayCourseInfo();


};


#endif // COURSE_H_INCLUDED
