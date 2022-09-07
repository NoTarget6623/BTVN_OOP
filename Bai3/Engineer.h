#pragma once
#include "Person.h"

class Engineer : public Person{
private :
    int experienceYear;
    string trainingMajor;
public :
    static int numEngineer;
    Engineer();
    Engineer(string name,int age,string sex,string phoneNumber,string address,string homeTown,string id,double factorSalary,int dayWorking,int experienceYear,string trainingMajor);
    void setExperienceYear(int experienceYear);
    void setTrainingMajor(string trainingMajor);
    int getExperienceYear();
    string getTrainingMajor();
    long long CalcSalary();
};