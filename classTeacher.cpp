#include<iostream>
#include<cstring>
using namespace std;
class Teacher{
    private:
 char name[40];
 int extension;
 public:
 Teacher(const char *name="",int extension=0) {
strcpy(this->name,name);
this->extension=extension;
 }
 void display(){
    cout<<" Teacher name: "<<name<<endl;
    cout<<" Extension number: "<<extension<<endl;
 }
 Teacher (const Teacher &t){
strcpy(name,t.name)  ;
extension=t.extension;
 }
 Teacher & operator =(const Teacher &t){
    if (this!=&t){
        strcpy(name,t.name);
        this->extension=t.extension;
    }
    return *this;
 }

};
class Classroom{
    private:
    int roomnumber;
    int capacity;
    public:
    Classroom(int roomnumber=0, int capacity=0){
        this->roomnumber=roomnumber;
        this->capacity=capacity;
    }
    void display(){
        cout<<"Classroom number: "<<roomnumber<<endl;
        cout<<"classroom capacity: "<<capacity<<endl;
    }
    Classroom(const Classroom &c){
        roomnumber=c.roomnumber;
        capacity=c.capacity;
    }
        Classroom & operator =(const Classroom &c){
            if(this!=&c){
                this->roomnumber=c.roomnumber;
                this->capacity=c.capacity;
            }
            return *this;
        }
};
class Course{
    private:
    char title[20];
    Teacher t;
    Classroom C;
    public:
    Course(const char *title, const char * name, int extension,int roomnumber, int capacity ):t(name,extension), C(roomnumber, capacity){
        strcpy(this->title, title);
    }
    void display(){
        cout<<" Course title: "<<title<<endl;
        t.display();
        C.display();
    }
    Course(const Course &c): t(c.t), C(c.C){
        strcpy(title,c.title);

    }
    Course & operator=(const Course &c) {
        strcpy(title,c.title);
        t=c.t;
        C=c.C;
        return * this;
    }
    Course(const char *title="",const Teacher &T=Teacher(), const Classroom &c=Classroom()):t(T),C(c){
                strcpy(this->title, title);

    }


};
int main(){
Course c1("oop","abdullah",45,24,60);
Course c2("pf","idress",46,25,60);
char cname[40];
cout<<"Enter course name: "<<endl;
cin>>cname;
char tname[20];
cout<<"Enter teacher name: "<<endl;
cin>>tname;
int ext,room,cap;
cout<<"enter teachers extension: "<<endl;
cin>>ext;
cout<<"Enter roomnumber: "<<endl;
cin>>room;
cout<<"Enter cpacity: "<<endl;
cin>>cap;
Course c3(cname,tname,ext,room,cap);
char ccname[40];
cout<<"Enter course name: "<<endl;
cin>>ccname;
char ttname[20];
cout<<"Enter teacher name: "<<endl;
cin>>ttname;
int eext,rroom,ccap;
cout<<"enter teachers extension: "<<endl;
cin>>eext;
cout<<"Enter roomnumber: "<<endl;
cin>>rroom;
cout<<"Enter cpacity: "<<endl;
cin>>ccap;
Course *c4= new Course(ccname,ttname,eext,rroom,ccap);
cout<<"Course 1: "<<endl;
c1.display();
cout<<endl;

cout<<"Course 2: "<<endl;
c2.display();
cout<<endl;

cout<<"Course 3: "<<endl;
c3.display();
cout<<endl;

cout<<"Course 4: "<<endl;
c4->display();
cout<<endl;

Teacher t("tariq",47);
Classroom c(26,60);
Course c5("dld",t,c);
cout<<"course 5: "<<endl;
c5.display();
delete c4;
return 0;

}