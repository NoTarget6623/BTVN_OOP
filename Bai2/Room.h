#pragma once
#include "main.h"

class Room{
private :
    int id;
    int capacity;
public :
    Room(){
        this->id = 0;
        this->capacity = 0;
    }
    Room(int id,int capacity){
        this->id = id;
        this->capacity = capacity;
    }
    void setID(int id);
    int getID();
    void setCapacity(int capacity);
    int getCapacity();
};