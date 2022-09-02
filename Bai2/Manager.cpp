#include "Manager.h"

void Manager :: AddTeacher(){
    int id;
    string name;
    string hometown,permarnetAddress;
    string subject;
    int salary;
    cout << "Teacher 's ID : "; cin >> id;cin.ignore();
    cout << "Teacher 's name : "; getline(cin,name);
    cout << "Teacher 's hometown : "; getline(cin,hometown);
    cout << "Teacher 's permarnetAddress : "; getline(cin,permarnetAddress);
    cout << "Teacher 's salary : "; cin >> salary; cin.ignore();
    int tmp;
    cout << "Teacher 's subject : \n";
    cout << "1. Math\n 2.Physics\n 3.Chemistry \n";
    cout << "Choose : "; cin >> tmp;cin.ignore();
    if(tmp == 1) subject = "Math";
    else if(tmp == 2) subject = "Physics";
    else if(tmp == 3) subject = "Chemistry";
    Address address = Address(hometown,permarnetAddress);
    teacher.push_back(Teacher(id,name,address,salary,subject));
}

void Manager :: AddStudent(){
    int id;
    string name;
    string hometown,permarnetAddress;
    double Math,Physics,Chemistry;
    int salary;
    cout << "Student 's ID : "; cin >> id;cin.ignore();
    cout << "Student 's name : "; getline(cin,name);
    cout << "Student 's hometown : "; getline(cin,hometown);
    cout << "Student 's permarnetAddress : "; getline(cin,permarnetAddress);
    cout << "Student 's Math scores : "; cin >> Math; cin.ignore();
    cout << "Student 's Physics scores : "; cin >> Physics; cin.ignore();
    cout << "Student 's Chemistry scores : "; cin >> Chemistry; cin.ignore();
    Transcript result = Transcript(Math,Physics,Chemistry);
    Address address = Address(hometown,permarnetAddress);
    student.push_back(Student(id,name,address,result));
}

void Manager :: AddClassroom(){
    cout << "Update....\n";
}

void Manager :: AddRoom(){
    cout << "Update....\n";
}

void Manager :: RemoveTeacher(){
    cout << "Update....\n";
}

void Manager :: RemoveStudent(){
    cout << "Update....\n";
}

void Manager :: RemoveClassroom(){
    cout << "Update....\n";
}

void Manager :: RemoveRoom(){
    cout << "Update....\n";
}

void Manager :: ShowTeachingSchedule(){
    cout << "Update....\n";
}

void Manager :: ShowStudyingSchedule(){
    cout << "Update....\n";
}

void Manager :: ShowPrettyRatingStudent(){
    cout << "Update....\n";
}

void Manager :: ShowGoodRatingStudent(){
    cout << "Update....\n";
}

void Manager :: ScheduleLessonsForTeacher(){
    cout << "Update....\n";
}

void Manager :: SchoolScheduleForStudent(){
    cout << "Update....\n";
}
