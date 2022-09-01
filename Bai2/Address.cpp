#include "Address.h"

void Address :: setHomeTown(string hometown){
    this->hometown = hometown;
}

string Address :: getHomeTown(){
    return hometown;
}

void Address :: setPermarnetAddress(string permarnetAddress){
    this->permarnetAddress = permarnetAddress;
}

string Address :: getPermarnetAddress(){
    return permarnetAddress;
}