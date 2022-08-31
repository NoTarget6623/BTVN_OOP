#include "Company.h"

void Company :: ImportManager(){
    manager.Import();
}

void Company :: ExportManager(){
    cout << "Name : " << manager.getName() << "\n";
    cout << "Age : " << manager.getAge() << "\n";
    cout << "Sex : " << manager.getSex() << "\n";
    cout << "HomeTown : " << manager.getHomeTown() << "\n";
}

void Company :: AddWorker(){
    Worker temp = Worker();
    temp.Import();
    temp.setID(worker.size() + 1);
    worker.push_back(temp);
}

void Company :: ExportAllWorker(){
    for(auto i : worker){
        cout << "--------------------------------\n";
        printf("ID : %04d\n", i.getID());
        cout << "Name : " << i.getName() << "\n";
        cout << "Age : " << i.getAge() << "\n";
        cout << "Sex : " << i.getSex() << "\n";
        cout << "HomeTown : " << i.getHomeTown() << "\n";
    }
}

void Company :: SalaryOfManager(){
    cout << "Salary Of Manager : " << manager.getSalary() << "\n";
}

void Company :: TotalSalaryOfWorker(){
    ll Sum = 0;
    for(auto i : worker){
        Sum += i.getSalary();
    }
    cout << "Total Salary Of All Worker : " << Sum << "\n";
}

bool SortSalary(Worker a,Worker b){
    return a.getSalary() > b.getSalary();
}

void Company :: SortDownSalary(){
    cout << "Sorted by Salary\n";
    sort(worker.begin(),worker.end(),SortSalary);
}

bool SortName(Worker a,Worker b){
    stringstream s1(a.getName());
    stringstream s2(b.getName());
    string token1,token2;
    while(s1 >> token1){}
    while(s2 >> token2){}
    return token1 < token2;
}

void Company :: SortUpName(){
    cout << "Sorted by Name\n";
    sort(worker.begin(),worker.end(),SortName);
}