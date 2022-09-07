#include "Guard.h"

Guard :: Guard() : Person(){
    this->area = "";
}

Guard :: Guard(string name,int age,string sex,string phoneNumber,string address,string homeTown,string id,double factorSalary,int dayWorking,string area) : Person(name,age,sex,phoneNumber,address,homeTown,id,factorSalary,dayWorking){
    this->area = area;
}

void Guard :: setArea(string area){
    this->area = area;
}

string Guard :: getArea(){
    return area;
}

long long Guard :: CalcSalary(){
    return 1LL * factorSalary * dayWorking;
}