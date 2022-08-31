#include "Worker.h"

void Worker :: Import(){
    Person :: Import();
    cout << "Number of working days : "; cin >> day;cin.ignore();
}

void Worker :: setID(int ID){
    this->ID = ID;
}

int Worker :: getID(){
    return ID;
}

void Worker :: setDay(int day){
    this->day = day;
}

int Worker :: getDay(){
    return day;
}

int Worker :: getSalary(){
    return day * 100000;
}