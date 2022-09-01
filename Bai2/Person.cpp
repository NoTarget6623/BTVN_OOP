#include "Person.h"

void Person :: setID(int id){
    this->id = id;
}

int Person :: getID(){
    return id;
}

void Person :: setName(string name){
    this->name = name;
}

string Person :: getName(){
    return name;
}

void Person :: setAddress(Address address){
    this->address = address;
}
Address Person :: getAddress(){
    return address;
}
