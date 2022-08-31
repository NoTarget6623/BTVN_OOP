#pragma once
#include "Person.h"

class Worker : public Person{
private :
    int ID;
    int day;
public :
    Worker() : Person(){
        this->day = 0;
        this->ID = 0;
    }
    Worker(string name,int age,string sex,string hometown,int day,int ID) : Person(name,age,sex,hometown){
        this->day = day;
        this->ID = ID;
    }
    void Import();
    void setID(int ID);
    int getID();
    void setDay(int day);
    int getDay();
    int getSalary();
};