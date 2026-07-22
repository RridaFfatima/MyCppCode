//bsdsf25m050
#include<iostream>
#include<string>
using namespace std;
const int NAME_SIZE = 50;
const int DEPT_SIZE = 50;
class Employee{
    private:
    
    int ID;
    char name[NAME_SIZE];
    char Dept_name[DEPT_SIZE];
    public:
    Employee(){
        ID=0;

        name[0]='\0';
        Dept_name[0]='\0';

    }
    Employee(int id, char empname[], char empdept[]){
        ID =id;
        strcpy(name,empname);
        strcpy(Dept_name,empdept);

    }
    Employee(int empid, char emppname[]){
        ID =empid;
        strcpy(name,emppname);
         Dept_name[0]='\0';
        

    }
    
    void setid(int i){
        ID=i;
    }
    void setname(char naame[]){
        strcpy(name,naame);
    }
    void setdept(char dept[]){
        strcpy(Dept_name,dept);
    }
    int getid()const{
        return ID;
    }
    const char* getname()const{
        return name;
    }
     const char* getdept()const{
        return Dept_name;
    }

    void Display(){
        cout<<"employee details: "<<endl;
        cout<<"employee id: "<<ID<<endl;
        cout<<"employee name: "<<name<<endl;
        cout<<"employee dept name: "<<Dept_name<<endl;
    }

};
int main(){
    int size;
    cout<<" size of array: "<<endl;
    cin>>size;
    Employee *arr=new Employee[size];
    for(int i=0;i<size; i++){
        cout<<"enter details for employee (id, name, deptname)"<<i+1<<" : "<<endl;
        int id;
        
        char name[NAME_SIZE];
        char deptname[DEPT_SIZE];
        cin>>id>>name>>deptname;


        arr[i].setid(id);
        arr[i].setname(name);
        arr[i].setdept(deptname);


    }
    cout<<"INFORMATION: "<<endl;
    for(int i=0;i<size; i++){
    arr[i].Display();
    cout<<endl;

    }
    delete [] arr;
    return 0;

}