#include "Engineer.h"

Engineer :: Engineer() : Person(){
    this->experienceYear = 0;
    this->trainingMajor = "";
}

Engineer :: Engineer(string name,int age,string sex,string phoneNumber,string address,string homeTown,string id,double factorSalary,int dayWorking,int experienceYear,string trainingMajor) : Person(name,age,sex,phoneNumber,address,homeTown,id,factorSalary,dayWorking){
    this->experienceYear = experienceYear;
    this->trainingMajor = trainingMajor;
}

void Engineer :: setExperienceYear(int experienceYear){
    this->experienceYear = experienceYear;
}

void Engineer :: setTrainingMajor(string trainingMajor){
    this->trainingMajor = trainingMajor;
}

int Engineer :: getExperienceYear(){
    return experienceYear;
}

string Engineer :: getTrainingMajor(){
    return trainingMajor;
}

long long Engineer :: CalcSalary(){
    return 1LL * experienceYear * dayWorking * factorSalary;
}
