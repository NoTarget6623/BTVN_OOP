#pragma once
#include "Address.h"

class Person{
protected :
    int id;
    string name;
    Address address;
public :
    Person(){
        this->id = 0;
        this->name = "";
        this->address = Address();
    }
    Person(int id,string name,Address address){
        this->id = id;
        this->name = name;
        this->address = address;
    }
    void setID(int id);
    int getID();
    void setName(string name);
    string getName();
    void setAddress(Address address);
    Address getAddress();
};