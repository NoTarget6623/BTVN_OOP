#include "main.h"
#include "Person.h"
#include "Worker.h"
#include "Manager.h"
#include "Company.h"

int main(){
    Company X = Company();
    while(true){
        cout << "                          MENU\n";
        cout << "===========================================================\n";
        cout << "1. Import Information of Manager\n";
        cout << "2. Add a new worker\n";
        cout << "3. Export Information of Manager\n";
        cout << "4. Export Information of all worker\n";
        cout << "5. Calculate Salary of Manager\n";
        cout << "6. Calculate Total Salary of all worker\n";
        cout << "7. Rearrange the order of workers by descending salary\n";	
        cout << "8. Rearrange the order of workers by name (dictionary order)\n";
        cout << "9. Quit\n";
        cout << "Enter options: ";
        int option;
        cin >> option;cin.ignore();
        cout << "\n";
        if(option > 9 || option < 1){
            cout << "Wrong!!! You can enter again.";
        }
        else if(option == 9){
            cout << "See you again!";
            exit(0);
        }
        else if(option == 1){
            X.ImportManager();
        }
        else if(option == 2){
            X.AddWorker();
        }
        else if(option == 3){
            X.ExportManager();
        }
        else if(option == 4){
            X.ExportAllWorker();
        }
        else if(option == 5){
            X.SalaryOfManager();
        }
        else if(option == 6){
            X.TotalSalaryOfWorker();
        }
        else if(option == 7){
            X.SortDownSalary();
        }
        else if(option == 8){
            X.SortUpName();
        }
    }
}