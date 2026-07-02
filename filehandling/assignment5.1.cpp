#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
using namespace std;
struct courses{
    string code;
    string name;
    int credit;
    int sem;
    string status;
};
int main(){
    ofstream ofile("courses.txt");
    ofstream oofile("ccourses.txt");
    courses a;
    int n;
    cout<<" enter how many courses: ";
    cin>>n;

    if(!oofile){
        cout<<"file not open"<<endl;
        return 0;
    }
    if(!ofile){
        cout<<"file not open"<<endl;
        return 0;
    }
    for(int i=0; i<n; i++){
        cout<<"enter course code : ";
        cin>>a.code;
        cout<<endl;
        ofile<<a.code<<",";
        oofile<<setw(10)<<left<<a.code;

        cout<<"enter course name : ";
        cin>>a.name;
        cout<<endl;
        ofile<<a.name<<",";
         oofile<<setw(10)<<left<<a.name;


        cout<<"enter course credit hours : ";
        cin>>a.credit;
        cout<<endl;
        ofile<<a.credit<<",";
        oofile<<setw(10)<<left<<a.credit;


        cout<<"enter semester number : ";
        cin>>a.sem;
        cout<<endl;
        ofile<<a.sem<<",";
        oofile<<setw(10)<<left<<a.sem;


        cout<<"enter course status(active/ discontinued) : ";
        cin>>a.status;
        cout<<endl;
        ofile<<a.status;
        oofile<<setw(10)<<left<<a.status;

        ofile<<endl;
        oofile<<endl;
         cout<<endl;

    }
    cout<<endl;
    
    ofile.close();
    oofile.close();
    return 0;
}