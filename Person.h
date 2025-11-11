#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED
using namespace std;
#include <iostream>
#include <string>
class Person{
private:
    string name;
    int id;
public:
    void setName(string s);
    void setId(int x);

    string getName();
    int getId();
    void display();


};


#endif // PERSON_H_INCLUDED
