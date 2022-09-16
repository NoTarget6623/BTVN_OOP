#pragma once
#include "Employee.h"

class OfficeEmployee : public Employee {
private:
	double basicSalary;
	int dayWorking;
public:
	static int NUM_OFFICE_EMPLOYEE;
	OfficeEmployee();
	OfficeEmployee(double basicSalary, int dayWorking);
	OfficeEmployee(string name, double basicSalary, int dayWorking);
	void setBasicSalary(double basicSalary);
	double getBasicSalary();
	void setDayWorking(int dayWorking);
	int getDayWorking();
	double getSalary();
};