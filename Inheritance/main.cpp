#include<iostream>
#include<string>
#include "Parkingmeter.h"
#include "parkedcar.h"
#include "Parkingticket.h"
#include "policeofficer.h"
using namespace std;
int main(){
    parkedcar p("honda",2016,"black","led346",70);
    Parkingmeter pp(p,60);
    Parkingticket ppp(p,pp,"david",456);
    policeofficer po(p,pp,"david",456);
    po.display();
    return 0;


}