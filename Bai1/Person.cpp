#include "Person.h"

Person :: Person(){
    this->name = "";
    this->age = 0;
    this->sex = "";
    this->hometown = "";
}

Person :: Person(string name,int age,string sex,string hometown){
    this->name = name;
    this->age = age;
    this->sex = sex;
    this->hometown = hometown;
}
void Person :: Import(){
    cout << "Name : "; getline(cin,name);
    cout << "Age : "; cin >> age;cin.ignore();
    cout << "Sex : "; getline(cin,sex);
    cout << "Hometown : "; getline(cin,hometown);
} 

void Person :: setName(string name){
    this->name = name;
}

string Person :: getName(){
    return name;
}

void Person :: setAge(int age){
    this->age = age;
}

int Person :: getAge(){
    return age;
}

void Person :: setSex(string sex){
    this->sex = sex;
}

string Person :: getSex(){
    return sex;
}

void Person :: setHomeTown(string hometown){
    this->hometown = hometown;
}

string Person :: getHomeTown(){
    return hometown;
}
