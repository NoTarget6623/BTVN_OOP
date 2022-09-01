#pragma once
#include "Person.h"

class Teacher : public Person{
private :
    int salary;
public :
    Teacher() : Person(){
        this->salary = 0;
    }
    Teacher(int id,string name,Address address,int salary) : Person(id,name,address){
        this->salary = salary;
    }
    void setSalary(int salary);
    int getSalary();
};