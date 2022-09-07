#include "Manager.h"

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

void Manager :: AddNewWorker(){
    string name;
    int age;
    string sex;
    string phoneNumber;
    string address;
    string homeTown;
    double factorSalary;
    int dayWorking;
    cout << "Name : "; getline(cin,name);
    cout << "Age : "; cin >> age;cin.ignore();
    cout << "Sex : "; getline(cin,sex);
    cout << "Phone Number : "; getline(cin,phoneNumber);
    cout << "Address : "; getline(cin,address);
    cout << "Hometown : "; getline(cin,homeTown);
    cout << "Factor Salary : "; cin >> factorSalary; cin.ignore();
    cout << "Day Working : "; cin >> dayWorking; cin.ignore();
    int level;
    cout << "Level : "; cin >> level; cin.ignore();
    worker.push_back(Worker(name,age,sex,phoneNumber,address,homeTown,Manager :: CreateID(worker.size() + 1,1),factorSalary,dayWorking,level));
}   

void Manager :: AddNewGuard(){
    string name;
    int age;
    string sex;
    string phoneNumber;
    string address;
    string homeTown;
    double factorSalary;
    int dayWorking;
    cout << "Name : "; getline(cin,name);
    cout << "Age : "; cin >> age;cin.ignore();
    cout << "Sex : "; getline(cin,sex);
    cout << "Phone Number : "; getline(cin,phoneNumber);
    cout << "Address : "; getline(cin,address);
    cout << "Hometown : "; getline(cin,homeTown);
    cout << "Factor Salary : "; cin >> factorSalary; cin.ignore();
    cout << "Day Working : "; cin >> dayWorking; cin.ignore();
    string area;
    cout << "Choose area working: \n";
    cout << "1. Storehouse\n";
    cout << "2. Gate\n";
    cout << "3. Factory\n";
    cout << "4. Dormitory\n";
    int count = 0;
    int choice = 0;
    cout << "Choose : "; cin >> choice;cin.ignore();
    while(choice == 0){
        count++;
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
    guard.push_back(Guard(name,age,sex,phoneNumber,address,homeTown,Manager :: CreateID(guard.size() + 1,2),factorSalary,dayWorking,area));
}

void Manager :: AddNewEngineer(){
    string name;
    int age;
    string sex;
    string phoneNumber;
    string address;
    string homeTown;
    double factorSalary;
    int dayWorking;
    cout << "Name : "; getline(cin,name);
    cout << "Age : "; cin >> age;cin.ignore();
    cout << "Sex : "; getline(cin,sex);
    cout << "Phone Number : "; getline(cin,phoneNumber);
    cout << "Address : "; getline(cin,address);
    cout << "Hometown : "; getline(cin,homeTown);
    cout << "Factor Salary : "; cin >> factorSalary; cin.ignore();
    cout << "Day Working : "; cin >> dayWorking; cin.ignore();
    int experienceYear;
    string trainingMajor;
    cout << "Experience Years : "; cin >> experienceYear; cin.ignore();
    cout << "Training Major : "; getline(cin,trainingMajor);
    engineer.push_back(Engineer(name,age,sex,phoneNumber,address,homeTown,Manager :: CreateID(engineer.size() + 1,3),factorSalary,dayWorking,experienceYear,trainingMajor));
}

void Manager :: ShowInforAWorker(int position){
    cout << "ID : " << worker[position].getID() << "\n";
    cout << "Name : " << worker[position].getName() << "\n";
    cout << "Age : " << worker[position].getAge() << "\n";
    cout << "Sex : " << worker[position].getSex() << "\n";
    cout << "Phone Number : " << worker[position].getPhoneNumber() << "\n";
    cout << "Address : " << worker[position].getAddress() << "\n";
    cout << "Hometown : " << worker[position].getHomeTown() << "\n";
    cout << "Factor Salary : " << worker[position].getFactorSalary() << "\n";
    cout << "Day Working : " << worker[position].getDayWorking() << "\n";
    cout << "Level : " << worker[position].getLevel() << "\n";
}

void Manager :: ShowInforAGuard(int position){
    cout << "ID : " << guard[position].getID() << "\n";
    cout << "Name : " << guard[position].getName() << "\n";
    cout << "Age : " << guard[position].getAge() << "\n";
    cout << "Sex : " << guard[position].getSex() << "\n";
    cout << "Phone Number : " << guard[position].getPhoneNumber() << "\n";
    cout << "Address : " << guard[position].getAddress() << "\n";
    cout << "Hometown : " << guard[position].getHomeTown() << "\n";
    cout << "Factor Salary : " << guard[position].getFactorSalary() << "\n";
    cout << "Day Working : " << guard[position].getDayWorking() << "\n";
    cout << "Area : " << guard[position].getArea() << "\n";
}

void Manager :: ShowInforAEngineer(int position){
    cout << "ID : " << engineer[position].getID() << "\n";
    cout << "Name : " << engineer[position].getName() << "\n";
    cout << "Age : " << engineer[position].getAge() << "\n";
    cout << "Sex : " << engineer[position].getSex() << "\n";
    cout << "Phone Number : " << engineer[position].getPhoneNumber() << "\n";
    cout << "Address : " << engineer[position].getAddress() << "\n";
    cout << "Hometown : " << engineer[position].getHomeTown() << "\n";
    cout << "Factor Salary : " << engineer[position].getFactorSalary() << "\n";
    cout << "Day Working : " << engineer[position].getDayWorking() << "\n";
    cout << "Experience Years : " << engineer[position].getExperienceYear() << "\n";
    cout << "Training Major : " << engineer[position].getTrainingMajor() << "\n";
}

void Manager :: FindInforByName(){
    string name;
    cout << "Choose name you want to find : "; getline(cin,name);
    int position;
    int classify = 0;
    int temp;
    temp = FindInforWorker(name);
    if(temp != -1) classify = 1,position = temp;
    else{
        temp = FindInforGuard(name);
        if(temp != -1) classify = 2,position = temp;
        else {
            temp = FindInforEngineer(name);
            if(temp != -1) classify = 2,position = temp;
        }
    }
    if(classify == 0) cout << "Name does not exist\n";
    else if(classify == 1) ShowInforAWorker(position);
    else if(classify == 2) ShowInforAGuard(position);
    else if(classify == 3) ShowInforAEngineer(position);
}

int Manager ::FindInforWorker(string name){
    for(int i = 0;i < worker.size();i++){
        if(worker[i].getName() == name){
            return i;
        }
    }
    return -1;
}

int Manager ::FindInforGuard(string name){
    for(int i = 0;i < guard.size();i++){
        if(guard[i].getName() == name){
            return i;
        }
    }
    return -1;
}

int Manager ::FindInforEngineer(string name){
    for(int i = 0;i < engineer.size();i++){
        if(engineer[i].getName() == name){
            return i;
        }
    }
    return -1;
}

void Manager :: CalcSalaryByName(){
    string name;
    cout << "Choose name you want to find : "; getline(cin,name);
    int position;
    int classify = 0;
    int temp;
    temp = FindInforWorker(name);
    if(temp != -1) classify = 1,position = temp;
    else{
        temp = FindInforGuard(name);
        if(temp != -1) classify = 2,position = temp;
        else {
            temp = FindInforEngineer(name);
            if(temp != -1) classify = 2,position = temp;
        }
    }
    if(classify == 0) cout << "Name does not exist\n";
    else if(classify == 1) cout << worker[position].CalcSalary();
    else if(classify == 2) cout << guard[position].CalcSalary();
    else if(classify == 3) cout << engineer[position].CalcSalary();
}
