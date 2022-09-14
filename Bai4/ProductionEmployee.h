#pragma once
#include "Employee.h"

class ProductionEmployee : public Employee {
private:
	static int NUM_PRODUCTION_EMPLOYEE;
	int numProduct;
	double priceOfProduct;
public:
	ProductionEmployee();
	ProductionEmployee(string name, int numProDuct, double priceOfProduct);
	void setNumProduct(int numProduct);
	int getNumProduct();
	void setPriceOfProduct(double priceOfProduct);
	double getPriceOfProduct();
	double getSalary();
};