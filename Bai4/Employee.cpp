#include "Employee.h"

Employee::Employee()
{
	this->name = "";
	this->id = "";
}

Employee::Employee(string name)
{
	this->name = name;
}

void Employee::setName(string name)
{
	this->name = name;
}

string Employee::getName()
{
	return name;
}

void Employee::setID(string id)
{
	this->id = id;
}

string Employee::getID()
{
	return id;
}

double Employee::getSalary()
{
	return 0.0;
}
