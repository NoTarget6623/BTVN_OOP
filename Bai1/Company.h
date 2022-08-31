#pragma once
#include "Worker.h"
#include "Manager.h"

class Company{
private:
    Manager manager;
    vector <Worker> worker;
public:
    Company(){
        this->manager = Manager();
        this->worker = {};  
    }
    Company(Manager manager, vector <Worker> worker){
        this->manager = manager;
        this->worker = worker;
    }
    void ImportManager();
    void ExportManager();
    void AddWorker();
    void ExportAllWorker();
    void SalaryOfManager();
    void TotalSalaryOfWorker();
    void SortDownSalary();
    void SortUpName();
};