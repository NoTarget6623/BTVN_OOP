#pragma once
#include "Employee.h"

class OfficeEmployee : public Employee {
private:
	static int NUM_OFFICE_EMPLOYEE;
	double basicSalary;
	int dayWorking;
public:
	OfficeEmployee();
	OfficeEmployee(string name, double basicSalary, int dayWorking);
	void setBasicSalary(double basicSalary);
	double getBasicSalary();
	void setDayWorking();
	int getDayWorking();
	double getSalary();
};