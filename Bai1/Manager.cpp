#include "Manager.h"

void Manager :: Import(){
    Person :: Import();
    cout << "FactorSalary : ";cin >> factorSalary; cin.ignore();
}

void Manager :: setFactorSalary(int factorSalary){
    this->factorSalary = factorSalary;
}

int Manager :: getFactorSalary(){
    return factorSalary;
}

int Manager :: getSalary(){
    return factorSalary * 3000000;
}