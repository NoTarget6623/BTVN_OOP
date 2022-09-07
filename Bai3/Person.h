#pragma once
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <cstring>
#include <climits>
#include <fstream>
#include <map>
#include <set>
#include <queue>
#include <stack>

using namespace std;

class Person{
protected :
    string name;
    int age;
    string sex;
    string phoneNumber;
    string address;
    string homeTown;
    string id;
    double factorSalary;
    int dayWorking;
public :
    Person();
    Person(string name,int age,string sex,string phoneNumber,string address,string homeTown,string id,double factorSalary,int dayWorking);
    void setName(string name);
    void setAge(int age);
    void setSex(string sex);
    void setPhoneNumber(string phoneNumber);
    void setAddress(string address);
    void setHomeTown(string hometown);
    void setID(string id);
    void setFactorSalary(double factorSalary);
    void setDayWorking(int dayWorking);
    string getName();
    int getAge();
    string getSex();
    string getPhoneNumber();
    string getAddress();
    string getHomeTown();
    string getID();
    double getFactorSalary();
    int getDayWorking();
};