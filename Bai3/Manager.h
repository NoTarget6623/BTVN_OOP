#pragma once
#include "Worker.h"
#include "Guard.h"
#include "Engineer.h"

class Manager{
private :
    vector <Worker> workers;
    vector <Guard> guards;
    vector <Engineer> engineers;
public :
    string CreateID(int serial, int classify);
    void AddNewWorker();
    void AddNewGuard();
    void AddNewEngineer();
    void ShowInforAWorker(int position);
    void ShowInforAGuard(int position);
    void ShowInforAEngineer(int position);
    void FindInforByName();
    void CalcSalaryByName();
};