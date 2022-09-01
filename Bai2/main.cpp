#include "Classroom.h"
#include "Room.h"
#include "Student.h"
#include "Teacher.h"

int main(){
    Classroom x = Classroom();
    Person a = Person();
    Address tmp = Address("Ha Tinh","Ha Noi");
    a.setAddress(tmp);
    cout << a.getAddress().getHomeTown();
}