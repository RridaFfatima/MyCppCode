#ifndef PARKINGMETER_H
#define PARKINGMETER_H
#include "parkedcar.h"
#include<iostream>
#include<string>
class Parkingmeter{
    private:
    int parkingminutespurchased; 
    int illegalminutes;
    parkedcar &p;

    public:
    Parkingmeter(parkedcar &P, int parkingminutes=0);
    int extramin();
    ~Parkingmeter();
};
#endif
