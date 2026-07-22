
#include<iostream>
#include<string>
#include "Parkingmeter.h"
#include "parkedcar.h"
#include "Parkingticket.h"
#include "policeofficer.h"
using namespace std;
policeofficer::  policeofficer(parkedcar &pc, Parkingmeter &pm,string policename, int badgenumber) :policename(policename), badgenumber(badgenumber), pc(pc), pm(pm){

}
string policeofficer :: getofficername()const{
    return policename;
}
int policeofficer:: getofficerbadge()const{
    return badgenumber;
}
policeofficer::  ~policeofficer(){}

void policeofficer:: display(){
    Parkingticket pt(pc,pm,policename,badgenumber);
    pt.determinefine();

}

