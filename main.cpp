#include <iostream>
#include <string>
#include "Person.h"
#include "student.h"
#include "Instructor.h"
#include "Course.h"
using namespace std;



string Person::getName(){
    return name;

}
int Person::getId(){
    return id;
}

void Person::setName(string s){
    name=s;
}

void Person ::setId(int x){
   id=x;
}
void Person::display(){
cout<< "Name: "<< getName()<< endl;
cout<< "Id: "<< getId()<< endl;

}

void student::setMajor(string m){
major =m;
}

void student ::setYear(int x){
yearLevel=x;
}
string student::getMajor(){
    return major;

}
int student::getYL(){
    return yearLevel;
}

///void student::display() : Person {
///    cout<<"Year Level: "<< getYL()<<endl;
 ///   cout << "Major: "<< getMajor()<< endl;

///}






void Course::displayCourseInfo(){
cout<< courseCode<< courseName << maxStudents<< endl;
}


int main(){
 student s;
 s.setName("Omar Nabil");

 s.setYear(2);
 s.setMajor("Informatics");
 Instructor i;
 i.setName("Dr.Lina Khaled");



}
