#pragma once
#include "Person.h"
#include "Transcript.h"

class Student : public Person{
private :
    Transcript result;
public :
    Student() : Person(){
        this->result = Transcript();
    }
    Student(int id,string name,Address address,Transcript result) : Person(id,name,address){
        this->result = result;
    }
    void setResult(Transcript result);
    Transcript getResult();
};