#pragma once
#include "main.h"

class Address{
private :
    string hometown;
    string permarnetAddress;
public :
    Address(){
        this->hometown = "";
        this->permarnetAddress = "";
    }
    Address(string hometown,string permarnetAddress){
        this->hometown = hometown;
        this->permarnetAddress = permarnetAddress;
    }
    void setHomeTown(string hometown);
    string getHomeTown();
    void setPermarnetAddress(string permarnetAddress);
    string getPermarnetAddress();
};