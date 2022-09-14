#pragma once
#include "OfficeEmployee.h"
#include "ProductionEmployee.h"

class Company {
private:
	vector <Employee*> employees;
public:
	Company();
	~Company();
	void AddNewEmployee();
	void ShowInforAllEmployees();
	Employee* FindEmployeeByID(string id);
	void EditInforEmployee();
	void CalculateSalaryEmployee();
	void SumSalaryAllEmployees();
};