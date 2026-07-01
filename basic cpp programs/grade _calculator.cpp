#include <iostream>
#include <string>
using namespace std;
int main() {
    int S1,S2,S3,S4,S5,Total; float average; char grade;
    cout<<"Enter marks of five subjects"<<endl;
    cin>>S1>>S2>>S3>>S4>>S5;
    Total=S1+S2+S3+S4+S5;
    average=Total/5.0;
    if(average>=85){
        grade='A';
    }
    if((average<=84)||(average==70)){
        grade='B';
    }
    if((average<=69)||(average==50)){
        grade='C';
    }
    if(average<50){
        grade='F';
    }
 cout<<Total<<endl;
 cout<<average<<endl;
 cout<<grade<<endl;
 return 0;
}