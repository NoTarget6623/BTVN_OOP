#include "Manager.h"

int main(){
    Manager PTIT;
    while(true){
        int choice;
        cout << "                MENU\n";
        cout << "=====================================\n";
        cout << "1. Add new teacher\n";
        cout << "2. Add new student\n";
        cout << "3. Add new classroom\n";
        cout << "4. Add new room\n";
        cout << "5. Remove a teacher\n";
        cout << "6. Remove a student\n";
        cout << "7. Remove a classroom\n";
        cout << "8. Remove a room\n";
        cout << "9. Show a Teacher 's Schedule\n";
        cout << "10. Show a Student 's Schedule\n";
        cout << "11. Show list pretty rating students\n";
        cout << "12. Show list good rating students\n";
        cout << "13. Schedule Lessons For Teacher\n";
        cout << "14. School Schedule For Student\n";
        cout << "15. Quit\n";
        cout << "Choose : "; cin >> choice;cin.ignore();
        if(choice == 1) PTIT.AddTeacher();
        else if(choice == 2) PTIT.AddStudent();
        else if(choice == 3) PTIT.AddClassroom();
        else if(choice == 4) PTIT.AddRoom();
        else if(choice == 5) PTIT.RemoveTeacher();
        else if(choice == 6) PTIT.RemoveStudent();
        else if(choice == 7) PTIT.RemoveClassroom();
        else if(choice == 8) PTIT.RemoveRoom();
        else if(choice == 9) PTIT.ShowTeachingSchedule();
        else if(choice == 10) PTIT.ShowStudyingSchedule();
        else if(choice == 11) PTIT.ShowPrettyRatingStudent();
        else if(choice == 12) PTIT.ShowGoodRatingStudent();
        else if(choice == 13) PTIT.ScheduleLessonsForTeacher();
        else if(choice == 14) PTIT.SchoolScheduleForStudent();
        else if(choice == 15) exit(0);
        else cout << "Wrong... You can choose again!\n";
    }
}