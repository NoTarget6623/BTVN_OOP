#pragma once
#include "main.h"

class Person{
private :
    string name;
    int age;
    string sex;
    string hometown;
public :
    Person();
    Person(string name,int age,string sex,string hometown);
    void Import();
    void setName(string name);
    string getName();
    void setAge(int age);
    int getAge();
    void setSex(string sex);
    string getSex();
    void setHomeTown(string hometown);
    string getHomeTown();
};