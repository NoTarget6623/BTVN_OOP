#pragma once
#include "Student.h"
#include "Teacher.h"
#include "Time.h"

class Classroom{
private :
    Teacher teacher;
    vector <Student> student;
    Time time;
public :
    Classroom(){
        this->teacher = Teacher();
        this->student = vector <Student> (0,Student());
        this->time = Time();
    }
    Classroom(Teacher teacher,vector <Student> student,Time time){
        this->teacher = teacher;
        this->student = student;
        this->time = time;
    }
    void setTeacher(Teacher teacher);
    Teacher getTeacher();
    void setStudent(vector <Student> student);
    vector <Student> getStudent();
    void setTime(Time time);
    Time getTime();
};
