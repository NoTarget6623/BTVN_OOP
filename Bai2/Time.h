#pragma once
#include "main.h"

class Time{
private :
    int start;
    int end;
public :
    Time(){
        this->start = 0;
        this->end = 0;
    }
    Time(int start,int end){
        this->start = start;
        this->end = end;
    }
    void setStart(int start);
    int getStart();
    void setEnd(int end);
    int getEnd();
};