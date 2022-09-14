#include "OfficeEmployee.h"

int OfficeEmployee::NUM_OFFICE_EMPLOYEE = 0;

OfficeEmployee::OfficeEmployee() : Employee() {
	this->basicSalary = 0.0;
	this->dayWorking = 0;
}

OfficeEmployee::OfficeEmployee(string name, double basicSalary, int dayWorking) : Employee(name) {
	this->basicSalary = basicSalary;
	this->dayWorking = dayWorking;
	string temp_ID = to_string(++NUM_OFFICE_EMPLOYEE);
	while (temp_ID.length() < 3) temp_ID = "0" + temp_ID;
	temp_ID = "VP" + temp_ID;
	this->id = temp_ID;
}

void OfficeEmployee::setBasicSalary(double basicSalary) {
	this->basicSalary = basicSalary;
}

double OfficeEmployee::getBasicSalary() {
	return basicSalary;
}

void OfficeEmployee::setDayWorking() {
	this->dayWorking = dayWorking;
}

int OfficeEmployee::getDayWorking() {
	return dayWorking;
}

double OfficeEmployee::getSalary() {
	return basicSalary * dayWorking;
}
