#include "Parkingmeter.h"
#include "parkedcar.h"
#include<iostream>
#include<string>
using namespace std;
Parkingmeter :: Parkingmeter(parkedcar &P,int parkingminutespurchased):parkingminutespurchased(parkingminutespurchased),p(P){}
int Parkingmeter :: extramin(){
    if(p.getmin() > parkingminutespurchased){
        return p.getmin()- parkingminutespurchased;

    }
    return 0;
}
Parkingmeter :: ~Parkingmeter(){}