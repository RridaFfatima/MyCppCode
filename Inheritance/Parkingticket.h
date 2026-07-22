#ifndef PARKINGTICKET_H
#define PARKINGTICKET_H
#include<string>
#include "Parkingmeter.h"
#include "parkedcar.h"
using namespace std;
class Parkingticket{
    private:
    
    string policename;
    int badgenumber;
    parkedcar &pc;
    Parkingmeter &pm;

    public:
    Parkingticket(parkedcar &Pc,Parkingmeter &pm,  string policename="", int badgenumber=0);
    string getpolice();
    int getbadgenumber();
    void determinefine();
    ~Parkingticket();

   


};
#endif
