#pragma once
#include "Person.h"

class Teacher : public Person{
private :
    int NUM_TEACHER;
    int salary;
    string subject;
public :
    Teacher() : Person(){
        this->salary = 0;
        this->subject = "";
    }
    Teacher(int id,string name,Address address,int salary,string subject) : Person(id,name,address){
        this->salary = salary;
        this->subject = subject;
    }
    void setSalary(int salary);
    int getSalary();
    void setSubject(string subject);
    string getSubject();
};