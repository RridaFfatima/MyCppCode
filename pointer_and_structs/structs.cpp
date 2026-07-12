#include<iostream>
#include<string>
using namespace std;
struct Employee{
    char fName[20]; // contains first name of the employee
char lName[20]; // contains last name of the employee
int bYear; // contains year of birth of the employee. Value range: 1950 to 1990
char bMonth[4]; // contains month of birth of the employee e.g. JAN, JUL, DEC
int bDay; // contains date (day) birth of the employee. Value range: 131
int jYear; // contains joining year of employee. Value range: 1980 to 2013
char jMonth[4]; // contains joining month of employee e.g. JAN, FEB, JUN, DEC
int jDay; // contains joining date (day) of employee. Value range: 131
long salary; // contains salary of the employee. Value Range 10000100000
};
Employee emp;
void initEmployee(Employee &emp){
   emp={};
}
 void viewEmployee(Employee &emp){
    cout<<"First name: "<<emp.fName<<endl;
    cout<<"last name: "<<emp.lName<<endl;
    cout<<"birth year: "<<emp.bYear<<endl;
    cout<<"birth month: "<<emp.bMonth<<endl;
    cout<<"birth day: "<<emp.bDay<<endl;
    cout<<"joining year: "<<emp.jYear<<endl;
    cout<<"joining month: "<<emp.jMonth<<endl;
    cout<<"joining day: "<<emp.jDay<<endl;
    cout<<"salary: "<<emp.salary<<endl;
 }
 void addEmployee(Employee &emp){
    cout<<"First name: "<<endl;
    cin>>emp.fName;
    cout<<"last name: "<<endl;

    cin>>emp.lName;
    cout<<"birth year: "<<endl;

    cin>>emp.bYear;
    cout<<"birth month: "<<endl;

    cin>>emp.bMonth;
    cout<<"birth day: "<<endl;

    cin>>emp.bDay;
    cout<<"joining year: "<<endl;

    cin>>emp.jYear;
    cout<<"joining month: "<<endl;

    cin>>emp.jMonth;
    cout<<"joining day: "<<endl;

    cin>>emp.jDay;
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