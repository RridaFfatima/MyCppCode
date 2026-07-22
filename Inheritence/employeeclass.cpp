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
int main(){
    ProductionWorker pw("david",345,1,40);
    pw.displayy();
    pw.setname("ali");
    pw.setnumber(390);
    pw.setshift(2);
    pw.sethourlypay(60);
    pw.displayy();
    return 0;

}