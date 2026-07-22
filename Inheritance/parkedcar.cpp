#include "parkedcar.h"
#include<string>
    parkedcar:: parkedcar(string carmake, int model, string colour, string licensenumber, int minutes): carmake(carmake), model(model),colour(colour) ,licensenumber(licensenumber), minutes(minutes){
        
    }
    int parkedcar:: getmin(){
        return minutes;
    }
    parkedcar:: ~parkedcar(){}


