#include "ProductionEmployee.h"

int ProductionEmployee::NUM_PRODUCTION_EMPLOYEE = 0;

ProductionEmployee::ProductionEmployee() : Employee() {
	this->numProduct = 0;
	this->priceOfProduct = 0.0;
}

ProductionEmployee::ProductionEmployee(int numProDuct, double priceOfProduct) {
	this->numProduct = numProDuct;
	this->priceOfProduct = priceOfProduct;
	string temp_ID = to_string(++NUM_PRODUCTION_EMPLOYEE);
	while (temp_ID.length() < 3) temp_ID = "0" + temp_ID;
	temp_ID = "SX" + temp_ID;
	this->id = temp_ID;
}

ProductionEmployee::ProductionEmployee(string name, int numProDuct, double priceOfProduct) : Employee(name) {
	this->numProduct = numProDuct;
	this->priceOfProduct = priceOfProduct;
	string temp_ID = to_string(++NUM_PRODUCTION_EMPLOYEE);
	while (temp_ID.length() < 3) temp_ID = "0" + temp_ID;
	temp_ID = "SX" + temp_ID;
	this->id = temp_ID;
}

void ProductionEmployee::setNumProduct(int numProduct) {
	this->numProduct = numProduct;
}

int ProductionEmployee::getNumProduct() {
	return numProduct;
}

void ProductionEmployee::setPriceOfProduct(double priceOfProduct) {
	this->priceOfProduct = priceOfProduct;
}

double ProductionEmployee::getPriceOfProduct() {
	return priceOfProduct;
}

double ProductionEmployee::getSalary() {
	return numProduct * priceOfProduct;
}


