#include <iostream>
#include<string>
using namespace std;
class CPU{
    private:
    string cname;
    int modelnumber;
    public:
    CPU():modelnumber(-1),cname(""){
    
        cout<<"def cons of cpu"<<endl;
    }
    CPU(int modelnumber, string cname):modelnumber(modelnumber),cname(cname){
    
        cout<<"P cons of cpu"<<endl;
    }
    
    void getinfo(){
        cout<<"CPU name: "<<this->cname<<endl;
        cout<<"CPU modelnumber: "<<this->modelnumber;
    }
    ~CPU(){
       cout<<"CPU des"<<endl;
    }
};
class Computer{
    private:
    int makeyear;
    string name;
    CPU cpu;
    public:
    Computer(string name="", int makeyear=0):name(name){
        cout<<" def comp const"<<endl;
    }
    Computer(string name, int makeyear, int modelnumber, string cname):name(name), makeyear(makeyear), cpu(modelnumber,cname){
        cout<<" p comp const"<<endl;

    }
    void display(){
        cout<<name<<endl;
        cout<<makeyear<<endl;
         cpu.getinfo();
         cout<<endl;
    }
    ~Computer(){
        cout<<"comp des"<<endl;
    }
};
int main(){
    Computer c("del", 2024, 24567,"delcpu");
    c.display();
    return 0;

}

