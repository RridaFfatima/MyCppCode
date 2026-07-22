#include <iostream>
#include<string>
using namespace std;
class Engine{
    private:
    string enginetype;
    public:
    Engine(string enginetype){
        this->enginetype=enginetype;
        cout<<"engine constructor"<<endl;
    }
    string Getengine()const{
        return enginetype;
    }
    ~Engine(){
        cout<<"engine dest"<<endl;
    }

};
class Car{
    private:
    string carname;
    int releasedate;
    Engine enginename;
    public:
    Car(string carname, int releasedate, string enginename): carname(carname), releasedate(releasedate), enginename(enginename){
        cout<<" Car constructor"<<endl;
    }
    void getinfo(){
        cout<<"Car name: "<<this->carname<<endl;
        cout<<" Release date: "<<this->releasedate<<endl;
        cout<<"Engine name: "<<this->enginename.Getengine()<<endl;
    }
    ~Car(){
        cout<<"car dest"<<endl;
    }
};
int main(){
    Car c("audi", 24, " def45");
    c.getinfo();
    return 0;

}