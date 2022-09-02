#pragma once
#include "Student.h"
#include "Teacher.h"
#include "Time.h"
#include "Room.h"

class Classroom{
private :
    Teacher teacher;
    vector <Student> student;
    Time time;
    Room room;
public :
    Classroom(){
        this->teacher = Teacher();
        this->student = vector <Student> (0,Student());
        this->time = Time();
        this->room = Room();
    }
    Classroom(Teacher teacher,vector <Student> student,Time time, Room room){
        this->teacher = teacher;
        this->student = student;
        this->time = time;
        this->room = room;
    }
    void setTeacher(Teacher teacher);
    Teacher getTeacher();
    void setStudent(vector <Student> student);
    vector <Student> getStudent();
    void setTime(Time time);
    Time getTime();
    void setRoom(Room room);
    Room getRoom();
};
