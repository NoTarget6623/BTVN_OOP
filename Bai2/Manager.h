#pragma once
#include "Classroom.h"
#include "Room.h"
#include "Student.h"
#include "Teacher.h"

class Manager{
private :
    vector <Teacher> teacher;
    vector <Student> student;
    vector <Classroom> classroom;
    vector <Room> room;
public :
    void AddTeacher();
    void EditInfoTeacher();
    void AddStudent();
    void AddClassroom();
    void AddRoom();
    void RemoveTeacher();
    void RemoveStudent();
    void RemoveClassroom();
    void RemoveRoom();
    void ShowTeachingSchedule();
    void ShowStudyingSchedule();
    void ShowPrettyRatingStudent();
    void ShowGoodRatingStudent();
    void ScheduleLessonsForTeacher();
    void SchoolScheduleForStudent();
};
