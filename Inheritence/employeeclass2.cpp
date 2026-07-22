#include<iostream>
#include<string>
using namespace std;
class  Employee{
    private:
    char name[50];
    int number ;
    public:
Employee(const char* name="", int number=0){
    strcpy(this->name,name);
    this->number=number;
}
void setname(char n[]){
        strcpy(this->name,n);

}
void setnumber(int x){
    number=x;
}
const char * getname()const{
    return name;
}
int getnumber()const{
    return number;
}
void display(){
    cout<<"name: "<<name<<endl;
    cout<<"number: "<<number<<endl;
}
};
class ProductionWorker: public Employee{
    private:
    int shift;
    double hourlypay;
    public:
    ProductionWorker(const char* name="", int number=0,int shift=0, double hourlypay=0.0):Employee(name,number){
        this->shift=shift;
        this->hourlypay=hourlypay;
    }
    void setshift(int x){
        shift=x;
    }
    void sethourlypay(double d){
        hourlypay=d;
    }
    int getshift()const{
        return shift;
    }
    double gethourlypay()const{
        return hourlypay;
    }
    void displayy(){
        display();
        cout<<"shift "<<shift<<endl;
        cout<<"hourly pay: "<<hourlypay<<endl;
    }
};

class teamleader : public ProductionWorker{
private:
double bonus;
int traininghours;
int attendedhours;
public:
teamleader(const char* name="", int number=0,int shift=0, double hourlypay=0.0,double bonus=0.0, int traininghours=0, int attendedhours=0):ProductionWorker(name,number,shift,hourlypay){
    this->bonus=bonus;
    this->traininghours=traininghours;
    this->attendedhours=attendedhours;
}
void setbonus(double x){
    bonus=x;
}
void settraininghours(int x){
    traininghours=x;
}
void setattendedhours(int x){
    attendedhours=x;
}
double getbonus()const{
    return bonus;
}
int gettraininghours()const{
    return traininghours;
}
int getattendedhours()const{
    return attendedhours;
}
void displayyy(){
    display();
    displayy();
    cout<<"bonus: "<<bonus<<endl;
    cout<<"training hours: "<<traininghours<<endl;
    cout<<"attended hours: "<<attendedhours<<endl;
}

};
int main(){
    teamleader t("david",356,1,45,25,10,5);
    t.displayyy();
    t.setname("ali");
    t.setnumber(390);
    t.setshift(2);
    t.sethourlypay(60);
    t.setbonus(29);
   t.settraininghours(15);
   t.setattendedhours(10);
   cout<<"--------------------------------------"<<endl;
   t.displayyy();
   return 0;


}