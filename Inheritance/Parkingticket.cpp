#include "Parkingticket.h"
#include "Parkingmeter.h"
#include "parkedcar.h"
#include<iostream>
#include<string>
using namespace std;
 Parkingticket :: Parkingticket (parkedcar &PC, Parkingmeter &pm, string policename, int badgenumber) :pc(PC), pm(pm){
        
        this->policename=policename;
        this->badgenumber=badgenumber;
    }
     string  Parkingticket :: getpolice(){
        return policename;

    }
    int Parkingticket :: getbadgenumber(){
        return badgenumber;
    }
    void  Parkingticket :: determinefine(){
        int extra=pm.extramin();
        if(extra<=0){
            cout<<"no fine"<<endl;
            return ;

        }
        if(extra>60){
            int remain=extra-60;
            int hours= remain/60;
            if(remain %60!=0){
                hours++;
            }
            int f=25;
             f+=hours*10;
            cout<<"fine is :  "<<f<<"$"<<endl;
        
       
        cout<<" policeofficer issuing the ticket: "<<getpolice()<<endl;
        cout<<"badge number of officer issuing the ticket: "<<getbadgenumber()<<endl;
    }
    }
    Parkingticket :: ~Parkingticket(){}
