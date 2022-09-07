#pragma once
#include "Worker.h"
#include "Guard.h"
#include "Engineer.h"

class Manager{
private :
    vector <Worker> worker;
    vector <Guard> guard;
    vector <Engineer> engineer;
public :
    string CreateID(int serial, int classify);
    void AddNew();
    void AddNewWorker();
    void AddNewGuard();
    void AddNewEngineer();
    void ShowInforAWorker(int position);
    void ShowInforAGuard(int position);
    void ShowInforAEngineer(int position);
    void FindInforByName();
    int FindInforWorker(string name);
    int FindInforGuard(string name);
    int FindInforEngineer(string name);
    void CalcSalaryByName();
};