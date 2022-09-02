#include "Teacher.h"

void Teacher :: setSalary(int salary){
    this->salary = salary;
}

int Teacher :: getSalary(){
    return salary;
}

void Teacher :: setSubject(string subject){
    this->subject = subject;
}

string Teacher :: getSubject(){
    return subject;
}