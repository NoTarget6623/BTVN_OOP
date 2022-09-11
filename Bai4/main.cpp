#include "Company.h"

Company company;

void GetMenu() {
	system("cls");
	cout << "Choose what you want to do : \n";
	cout << "1. Add new employee \n";
	cout << "2. Show information of all employees \n";
	cout << "3. Edit information of a employee by ID \n";
	cout << "4. Calculate salary of a employee by ID \n";
	cout << "5. Show total salary of all employees \n";
	cout << "6. Exit\n";
	cout << "Choose : ";
}

int main() {
	while (true) {
		GetMenu();
		int choice;
		cin >> choice; cin.ignore();
		switch (choice)
		{
		case 1:
			company.AddNewEmployee();
			//system("pause");
			break;
		case 2:
			company.ShowInforAllEmployees();
			system("pause");
			break;
		case 3:
			company.EditInforEmployee();
			system("pause");
			break;
		case 4:
			company.CalculateSalaryEmployee();
			system("pause");
			break;
		case 5:
			company.SumSalaryAllEmployees();
			system("pause");
			break;
		case 6:
			cout << "See you again !\n";
			system("pause");
			exit(0);
			break;
		default:
			cout << "Wrong ! You can choose again !\n";
			system("pause");
			break;
		}
	}
}