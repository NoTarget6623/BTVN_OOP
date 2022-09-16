#pragma once
#include "Employee.h"

class ProductionEmployee : public Employee {
private:
	int numProduct;
	double priceOfProduct;
public:
	static int NUM_PRODUCTION_EMPLOYEE;
	ProductionEmployee();
	ProductionEmployee(int numProDuct, double priceOfProduct);
	ProductionEmployee(string name, int numProDuct, double priceOfProduct);
	void setNumProduct(int numProduct);
	int getNumProduct();
	void setPriceOfProduct(double priceOfProduct);
	double getPriceOfProduct();
	double getSalary();
};