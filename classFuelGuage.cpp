#include<iostream>
#include<cstring>
using namespace std;
class FuelGauge{
    private:
    int currentfuel;
    public:
    FuelGauge(int currentfuel=0){
        if(this->currentfuel>=0 && this->currentfuel<15){
            this->currentfuel=currentfuel;

        }
        else{
            this->currentfuel=0;
        }
    }
    int getcurrentfuel(){
        return currentfuel;
    }
   
    void incrementfuel(){
        if (getcurrentfuel()<15){
            currentfuel++;

        }
    }
    void decrementfuel(){
        if(getcurrentfuel()>0){
            currentfuel--;
        }
    }
};
class Odometer{
    private:
    int milecounter;
    int miles;
    public:
    Odometer(int m,int milecounter=0) {
        if(miles>=0 && miles<999999){
        this->miles=m;
        }
        else{
            miles=0;

        }
        this->milecounter=milecounter;
    }
    int getmiles(){
        return miles;
    }


    
    

    void  incrementmiles( FuelGauge &fg){
        miles++;
        if(getmiles()>999999){
            miles=0;
        }
         milecounter++;

        if(milecounter==24){
        fg.decrementfuel();
            milecounter=0;
        }
    }
    

};
int main(){
   FuelGauge f(0);
   Odometer o(0,0);
   
while(f.getcurrentfuel()<15){
    f.incrementfuel();
}
while(f.getcurrentfuel()>0){
   o.incrementmiles(f);
   cout<<"current miles: "<<o.getmiles()<<endl;
   cout<<"current fuel: "<<f.getcurrentfuel()<<endl;
}

   return 0;
   

}