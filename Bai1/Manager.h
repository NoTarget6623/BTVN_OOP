#pragma once
#include "Person.h"

class Manager : public Person{
private :
    int factorSalary;
public :
    Manager() : Person(){
        this->factorSalary = 0;
    }
    Manager(string name,int age,string sex,string hometown,int factorSalary) : Person(name,age,sex,hometown){
        this->factorSalary = factorSalary;
    }
    void Import();
    void setFactorSalary(int factorSalary);
    int getFactorSalary();
    int getSalary();
};