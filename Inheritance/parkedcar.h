#ifndef PARKEDCAR_H
#define PARKEDCAR_H
#include<string>
using namespace std;
class parkedcar{
    private:
    string carmake;
    int model;
    string colour;
    string licensenumber;
    int minutes;
    public:
    parkedcar(string carmake="", int model=0, string colour="", string licensenumber="", int minutes=0);
    int getmin();
    ~parkedcar();
};
#endif