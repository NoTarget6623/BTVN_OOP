#pragma once
#include "Person.h"

class Guard : public Person{
private :
    string area;
public :
    Guard();
    Guard(string name,int age,string sex,string phoneNumber,string address,string homeTown,string id,double factorSalary,int dayWorking,string area);
    void setArea(string area);
    string getArea();
    long long CalcSalary();
};