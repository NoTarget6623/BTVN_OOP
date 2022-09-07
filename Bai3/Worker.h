#pragma once
#include "Person.h"

class Worker : public Person{
private :
    int level;
public :
    Worker();
    Worker(string name,int age,string sex,string phoneNumber,string address,string homeTown,string id,double factorSalary,int dayWorking,int level);
    void setLevel(int level);
    int getLevel();
    long long CalcSalary();
};