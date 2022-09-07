#include "Manager.h"

int main(){
    Manager ProPTIT;
    while(true){
        cout << "MENU\n";
        cout << "===============================\n";
        cout << "1. Add new worker\n";
        cout << "2. Add new guard\n";
        cout << "3. Add new engineer\n";
        cout << "4. Find Information by name\n";
        cout << "5. Calculate Salary by name\n";
        cout << "6. Exit\n";
        cout << "Choose : ";
        int choice;
        cin >> choice; cin.ignore();
        if(choice == 1) ProPTIT.AddNewWorker();
        else if(choice == 2) ProPTIT.AddNewGuard();
        else if(choice == 3) ProPTIT.AddNewEngineer();
        else if(choice == 4) ProPTIT.FindInforByName();
        else if(choice == 5) ProPTIT.CalcSalaryByName();
        else if(choice == 6) break;
        else cout << "Wrong ! You can choose again !\n";
    }
}