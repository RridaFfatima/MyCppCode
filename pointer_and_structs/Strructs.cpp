#include<iostream>
#include<string>
using namespace std;

struct DateOfBirth{
int year; // contains year of birth of the employee. Value range: 1950 to 1990
char month[4]; // contains month of birth of the employee e.g. JAN, JUL, DEC
int day; // contains date (day) birth of the employee. Value range: 131
};

struct JoiningDate{
int year; // contains joining year of employee. Value range: 1980 to 2013
char month[4]; // contains joining month of employee e.g. JAN, FEB, JUN, DEC
int day; // contains joining date (day) of employee. Value range: 131
 };

 struct Employee{
char fName[20]; // contains first name of the employee
char lName[20]; // contains last name of the employee
DateOfBirth dob;
JoiningDate jDate;
long salary; // contains salary of the employee. Value Range 10000100000
};
Employee emp;

void initEmployee(Employee &emp){
   emp={};
}
 void viewEmployee(Employee &emp){
    cout<<"First name: "<<emp.fName<<endl;
    cout<<"last name: "<<emp.lName<<endl;
    cout<<"birth year: "<<emp.dob.year<<endl;
    cout<<"birth month: "<<emp.dob.month<<endl;
    cout<<"birth day: "<<emp.dob.day<<endl;
    cout<<"joining year: "<<emp.jDate.year<<endl;
    cout<<"joining month: "<<emp.jDate.month<<endl;
    cout<<"joining day: "<<emp.jDate.day<<endl;
    cout<<"salary: "<<emp.salary<<endl;
 }
 void addEmployee(Employee &emp){
    cout<<"First name: "<<endl;
    cin>>emp.fName;
    cout<<"last name: "<<endl;

    cin>>emp.lName;
    cout<<"birth year: "<<endl;

    cin>>emp.dob.year;
    cout<<"birth month: "<<endl;

    cin>>emp.dob.month;
    cout<<"birth day: "<<endl;

    cin>>emp.dob.day;
    cout<<"joining year: "<<endl;

    cin>>emp.jDate.year;
    cout<<"joining month: "<<endl;

    cin>>emp.jDate.month;
    cout<<"joining day: "<<endl;

    cin>>emp.jDate.day;
    cout<<"salary: "<<endl;

    cin>>emp.salary;
 }
 
int main(){
initEmployee(emp);
viewEmployee(emp);
addEmployee(emp);
viewEmployee(emp);

    return 0;
}