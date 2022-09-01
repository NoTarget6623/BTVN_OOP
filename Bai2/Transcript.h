#pragma once
#include "main.h"

class Transcript{
private :
    double Math;
    double Physics;
    double Chemistry;
public :
    Transcript(){
        this->Math = 0;
        this->Physics = 0;
        this->Chemistry = 0;
    }
    Transcript(double Math,double Physics,double Chemistry){
        this->Math = Math;
        this->Physics = Physics;
        this->Chemistry = Chemistry;
    }
    void setMath(double Math);
    double getMath();
    void setPhysics(double Physics);
    double getPhysics();
    void setChemistry(double Chemistry);
    double getChemistry();
};