#include "Person.h"

Person :: Person(){
    this->name = "";
    this->age = 0;
    this->sex = "";
    this->phoneNumber = "";
    this->address = "";
    this->homeTown = "";
    this->id = "";
    this->factorSalary = 0;
    this->dayWorking = 0;
}

Person :: Person(string name,int age,string sex,string phoneNumber,string address,string homeTown,string id,double factorSalary,int dayWorking){
    this->name = name;
    this->age = age;
    this->sex = sex;
    this->phoneNumber = phoneNumber;
    this->address = address;
    this->homeTown = homeTown;
    this->id = id;
    this->factorSalary = factorSalary;
    this->dayWorking = dayWorking;
}

void Person :: setName(string name){
    this->name = name;
}

void Person :: setAge(int age){
    this->age = age;
}

void Person :: setSex(string sex){
    this->sex = sex;
}

void Person :: setPhoneNumber(string phoneNumber){
    this->phoneNumber = phoneNumber;
}

void Person :: setAddress(string address){
    this->address = address;
}

void Person :: setHomeTown(string hometown){
    this->homeTown = homeTown;
}

void Person :: setID(string id){
    this->id = id;
}

void Person :: setFactorSalary(double factorSalary){
    this->factorSalary = factorSalary;
}

void Person :: setDayWorking(int dayWorking){
    this->dayWorking = dayWorking;
}

string Person :: getName(){
    return name;
}

int Person :: getAge(){
    return age;
}

string Person :: getSex(){
    return sex;
}

string Person :: getPhoneNumber(){
    return phoneNumber;
}

string Person :: getAddress(){
    return address;
}

string Person :: getHomeTown(){
    return homeTown;
}

string Person :: getID(){
    return id;
}

double Person :: getFactorSalary(){
    return factorSalary;
}

int Person :: getDayWorking(){
    return dayWorking;
}
