#ifndef POLICEOFFICER_H
#define POLICEOFFICER_H
#include<string>
#include "Parkingmeter.h"
#include "parkedcar.h"
#include "Parkingticket.h"
using namespace std;
class policeofficer{
    private: 
string policename;
 int badgenumber;
 parkedcar &pc;
 Parkingmeter &pm;
 public: 
 policeofficer(parkedcar &pc, Parkingmeter &pm,string policename="", int badgenumber=0 );
 string getofficername()const;
 int getofficerbadge()const;
 ~policeofficer();
 void display();


};
#endif