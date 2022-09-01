#include "Classroom.h"

void Classroom :: setTeacher(Teacher teacher){
    this->teacher = teacher;
}

Teacher Classroom :: getTeacher(){
    return teacher;
}

void Classroom :: setStudent(vector <Student> student){
    this->student = student;
}

vector <Student> Classroom :: getStudent(){
    return student;
}

void Classroom :: setTime(Time time){
    this->time = time;
}

Time Classroom :: getTime(){
    return time;
}