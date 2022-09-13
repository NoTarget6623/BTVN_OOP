#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <iomanip>

using namespace std;

class Employee 
{
protected:
	string name;
	string id;
public:
	Employee();
	Employee(string name);
	void setName(string name);
	string getName();
	void setID(string id);
	string getID();
	virtual double getSalary();
	void getTime();
};
