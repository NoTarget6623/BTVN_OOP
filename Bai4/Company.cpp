#include "Company.h"

Company::Company() {

}

Company::~Company() {
	for (Employee* employee : employees) {
		if (employee != nullptr) {
			delete employee;
		}
	}
	employees.clear();
}

void Company::AddNewEmployee() {
	int job;
	cout << "Choose job what you want to add : \n";
	cout << "1. Office Employee \n";
	cout << "2. Production Employee \n";
	cout << "Choose : "; cin >> job; cin.ignore();
	if (job < 1 && job > 2) {
		cout << "Wrong ! You can choose again !\n";
		return;
	}
	Employee* employee = new Employee();
	string name;
	cout << "Name : "; getline(cin, name);
	switch (job) {
	case 1:
		double basicSalary;
		int dayWorking;
		cout << "Basic Salary : "; cin >> basicSalary; cin.ignore();
		cout << "Day Working : "; cin >> dayWorking; cin.ignore();
		employee = new OfficeEmployee(name, basicSalary, dayWorking);
		break;
	case 2:
		int numProduct;
		double priceOfProduct;
		cout << "Number of products : "; cin >> numProduct; cin.ignore();
		cout << "Price of a product : "; cin >> priceOfProduct; cin.ignore();
		employee = new ProductionEmployee(name, numProduct, priceOfProduct);
		cout << employee->getName();
		break;
	}
	cout << "Add success!\n";
	this->employees.push_back(employee);
}

void Company::ShowInforAllEmployees() {
	if (employees.size() == 0) {
		cout << "Don't have employee in company\n";
		return;
	}
	int width = 6;
	for (Employee* employee : employees) {
		if (width < employee->getName().length()) {
			width = employee->getName().length();
		}
	}
	cout << "| " << left << setw(7) << "ID" << "|"
		<< " " << left << setw(width + 2) << "Name" << "|"
		<< " " << left << setw(13) << "Basic Salary" << "|"
		<< " " << left << setw(12) << "Day Working" << "|"
		<< " " << left << setw(19) << "Number of products" << "|"
		<< " " << left << setw(19) << "Price of a product" << "|"
		<< " " << setw(10) << "Salary" << "|\n";
	for (Employee* employee : employees) {
		cout << "| " << left << setw(7) << employee->getID() << "|"
			<< " " << left << setw(width + 2) << employee->getName() << "|";
		if (employee->getID().substr(0, 2) == "VP") {
			cout << " " << left << setw(13) << ((OfficeEmployee*)employee)->getBasicSalary() << "|"
				<< " " << left << setw(12) << ((OfficeEmployee*)employee)->getDayWorking() << "|"
				<< " " << left << setw(19) << 0 << "|"
				<< " " << left << setw(19) << 0 << "|";
		}
		else if (employee->getID().substr(0, 2) == "SX") {
			cout << " " << left << setw(13) << 0 << "|"
				<< " " << left << setw(12) << 0 << "|"
				<< " " << left << setw(19) << ((ProductionEmployee*)employee)->getNumProduct() << "|"
				<< " " << left << setw(19) << ((ProductionEmployee*)employee)->getPriceOfProduct() << "|";
		}
		cout << " " << setw(10) << (long long)employee->getSalary() << "|\n";
	}
}

Employee* Company::FindEmployeeByID(string id) {
	for (Employee* employee : employees) {
		if (employee->getID() == id) {
			return employee;
		}
	}
	return nullptr;
}

void Company::EditInforEmployee() {
	cout << "Import employee 's ID you want to edit : ";
	string id;
	getline(cin, id);
	Employee* employee = Company::FindEmployeeByID(id);
	if (employee == nullptr) cout << "ID does not exist\n";
	else {
		cout << "Choose what you want to edit :\n";
		cout << "1. Name\n";
		if (employee->getID().substr(0, 2) == "VP") {
			cout << "2. Basic Salary\n";
		}
		else if (employee->getID().substr(0, 2) == "SX") {
			cout << "2. Price of a product\n";
		}
		string name;
		double basicSalary, priceOfProduct;
		int choice;
		cout << "Choose : ";
		cin >> choice; cin.ignore();
		switch (choice) {
		case 1:
			cout << "Import new name : ";
			getline(cin, name);
			employee->setName(name);
			break;
		case 2:
			if (employee->getID().substr(0, 2) == "VP") {
				cout << "Import new basic salary : ";
				cin >> basicSalary; cin.ignore();
				((OfficeEmployee*)employee)->setBasicSalary(basicSalary);
			}
			else if (employee->getID().substr(0, 2) == "SX") {
				cout << "Import new price of a product : ";
				cin >> priceOfProduct; cin.ignore();
				((ProductionEmployee*)employee)->setPriceOfProduct(priceOfProduct);
			}
			break;
		default:
			cout << "Wrong ! See you again !\n";
			break;
		}
	}
}

void Company::CalculateSalaryEmployee() {
	cout << "Import employee 's ID you want to edit : ";
	string id;
	getline(cin, id);
	Employee* employee = Company::FindEmployeeByID(id);
	if (employee == nullptr) cout << "ID does not exist\n";
	else {
		cout << employee->getSalary() << "\n";
	}
}

void Company::SumSalaryAllEmployees() {
	double SumSalary = 0;
	for (Employee* employee : employees) {
		SumSalary += employee->getSalary();
	}
	cout << "Sum salary of all employees : " << (long long)SumSalary << "\n";
}
