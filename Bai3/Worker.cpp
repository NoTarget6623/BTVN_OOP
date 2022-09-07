#include "Worker.h"

Worker :: Worker() : Person(){
    this->level = 0;
}

Worker :: Worker(string name,int age,string sex,string phoneNumber,string address,string homeTown,string id,double factorSalary,int dayWorking,int level) : Person(name,age,sex,phoneNumber,address,homeTown,id,factorSalary,dayWorking){
    this->level = level;
}

void Worker :: setLevel(int level){
    this->level = level;
}

int Worker :: getLevel(){
    return level;
}

long long Worker :: CalcSalary(){
    return 1LL * level * factorSalary * dayWorking;
}