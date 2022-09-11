#include "Manager.h"

int Worker :: numWorker = 0;
int Guard :: numGuard = 0;
int Engineer :: numEngineer = 0;

string name;
int age;
string sex;
string phoneNumber;
string address;
string homeTown;
double factorSalary;
int dayWorking;

template <class T>
int FindPositionByName(vector <T> tmp,string name){
    for(int i = 0;i < tmp.size();i++){
        if(tmp[i].getName() == name){
            return i;
        }
    }
    return -1;
}

string Manager :: CreateID(int serial, int classify){
    string id;
    if(classify == 1) id = "CN";
    else if(classify == 2) id = "BV";
    else if(classify == 3) id = "KS";
    string tmp = to_string(serial);
    if(tmp.size() == 1) id += "00" + tmp;
    else if(tmp.size() == 2) id += "0" + tmp;
    else if(tmp.size() == 3) id += tmp;
    return id;
}

void AddNew(){
    cout << "Name : "; getline(cin,name);
    cout << "Age : "; cin >> age;cin.ignore();
    cout << "Sex : "; getline(cin,sex);
    cout << "Phone Number : "; getline(cin,phoneNumber);
    cout << "Address : "; getline(cin,address);
    cout << "Hometown : "; getline(cin,homeTown);
    cout << "Factor Salary : "; cin >> factorSalary; cin.ignore();
    cout << "Day Working : "; cin >> dayWorking; cin.ignore();
}

void Manager :: AddNewWorker(){
    AddNew();
    int level;
    cout << "Level : "; cin >> level; cin.ignore();
    workers.push_back(Worker(name,age,sex,phoneNumber,address,homeTown,Manager :: CreateID(++Worker :: numWorker,1),factorSalary,dayWorking,level));
}   

void Manager :: AddNewGuard(){
    AddNew();
    string area;
    cout << "Choose area working: \n";
    cout << "1. Storehouse\n";
    cout << "2. Gate\n";
    cout << "3. Factory\n";
    cout << "4. Dormitory\n";
    int count = 0;
    int choice = 0;
    while(choice == 0){
        count++;
        cout << "Choose : "; cin >> choice;cin.ignore();
        if(choice == 1) area = "Storehouse";
        else if(choice == 2) area = "Gate";
        else if(choice == 3) area = "Factory";
        else if(choice == 4) area = "Dormitory";
        else cout << "Wrong ! You can choose again !\n",choice = 0;
        if(count == 3){
            cout << "You chose wrong more than 3 times\n";
            return;
        }
    }
    guards.push_back(Guard(name,age,sex,phoneNumber,address,homeTown,Manager :: CreateID(++Guard :: numGuard,2),factorSalary,dayWorking,area));
}

void Manager :: AddNewEngineer(){
    AddNew();
    int experienceYear;
    string trainingMajor;
    cout << "Experience Years : "; cin >> experienceYear; cin.ignore();
    cout << "Training Major : "; getline(cin,trainingMajor);
    engineers.push_back(Engineer(name,age,sex,phoneNumber,address,homeTown,Manager :: CreateID(++Engineer :: numEngineer,3),factorSalary,dayWorking,experienceYear,trainingMajor));
}

void Manager :: ShowInforAWorker(int position){
    workers[position].ShowInfor();
    cout << "Level : " << workers[position].getLevel() << "\n";
}

void Manager :: ShowInforAGuard(int position){
    guards[position].ShowInfor();
    cout << "Area : " << guards[position].getArea() << "\n";
}

void Manager :: ShowInforAEngineer(int position){
    engineers[position].ShowInfor();
    cout << "Experience Years : " << engineers[position].getExperienceYear() << "\n";
    cout << "Training Major : " << engineers[position].getTrainingMajor() << "\n";
}

void Manager :: FindInforByName(){
    string name;
    cout << "Choose name you want to find : "; getline(cin,name);
    int position;
    int classify = 0;
    int temp;
    temp = FindPositionByName(workers,name);
    if(temp != -1) classify = 1,position = temp;
    else{
        temp = FindPositionByName(guards,name);
        if(temp != -1) classify = 2,position = temp;
        else {
            temp = FindPositionByName(engineers,name);
            if(temp != -1) classify = 3,position = temp;
        }
    }
    if(classify == 0) cout << "Name does not exist\n";
    else if(classify == 1) ShowInforAWorker(position);
    else if(classify == 2) ShowInforAGuard(position);
    else if(classify == 3) ShowInforAEngineer(position);
}

void Manager :: CalcSalaryByName(){
    string name;
    cout << "Choose name you want to find : "; getline(cin,name);
    int position;
    int classify = 0;
    int temp;
    temp = FindPositionByName(workers,name);
    if(temp != -1) classify = 1,position = temp;
    else{
        temp = FindPositionByName(guards,name);
        if(temp != -1) classify = 2,position = temp;
        else {
            temp = FindPositionByName(engineers,name);
            if(temp != -1) classify = 3,position = temp;
        }
    }
    if(classify == 0) cout << "Name does not exist\n";
    else if(classify == 1) cout << workers[position].CalcSalary() << "\n";
    else if(classify == 2) cout << guards[position].CalcSalary() << "\n";
    else if(classify == 3) cout << engineers[position].CalcSalary() << "\n";
}
