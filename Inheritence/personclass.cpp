#include<iostream>
#include<string>
using namespace std;
class person{
    private:
    char name[20];
    int age;
    public:
    person(const char * name="", int age=0){
        strcpy(this->name,name);
        this->age=age;
    }
    void setname(char name[]){
      strcpy(this->name,name);

    }
    void setage(int x){
        this->age=x;
    }
    int getage()const{
        return age;
    }
    const char * getname()const{
        return name;
    }


};
class Employee{
    private:
    char name[21];
    int wage;
    public:
    Employee(const char * name="", int wage=0){
         strcpy(this->name,name);
        this->wage=wage;
    }
    void setname(char name[]){
      strcpy(this->name,name);

    }
    void setwage(int x){
        this->wage=x;
    }
    int getwage()const{
        return wage;
    }
    const char * getname()const{
        return name;
    }

};
class Teacher: public person, public Employee{
private:
int payscale;
public:
Teacher(const char * name="", int age=0,const char * nname="", int wage=0,int payscale=0):person(name,age),Employee(nname,wage){
    this->payscale=payscale;
}
void setpayscale(int x){
    payscale=x;
}
int getpayscale()const{
    return payscale;
}
void display(){
    cout<<"name of person: "<<person::getname()<<endl;
    cout<<"age of person: "<<person::getage()<<endl;
    cout<<"name of employee: "<<Employee::getname()<<endl;
    cout<<"wage of employee: "<<Employee::getwage()<<endl;
    cout<<"payscale of teacher: "<<payscale<<endl;

}

};
int main(){
    Teacher t;
    t.person::setname("ali");
    t.person::setage(25);
    t.Employee::setname("ali");
    t.Employee::setwage(100000);
    t.setpayscale(100);
    t.display();
    return 0;


}