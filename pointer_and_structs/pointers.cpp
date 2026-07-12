#include<iostream>
#include<string>
using namespace std;
int main(){
    int j=10;
    int *p=&j;
    cout<<"address of j: "<<p<<endl;
    cout<<"value of j: "<<j<<endl;
    
    cout<<p<<endl;
    cout<<*p<<endl;
    j=*p+1;
    cout<<*p<<endl;



    cout<<"for character: "<<endl;
    char k='A';
    char *q=&k;
    cout<<"address of k: "<<q<<endl;
    cout<<"value of k: "<<k<<endl;
    
    cout<<q<<endl;
    cout<<*q<<endl;
    k=*q+1;
    cout<<*q<<endl;

        cout<<"for double: "<<endl;

    double l=5.0;
    double *r=&l;
    cout<<"address of l: "<<r<<endl;
    cout<<"value of l: "<<l<<endl;
    
    cout<<r<<endl;
    cout<<*r<<endl;
    l=*r+1;
    cout<<*r<<endl;
    return 0;

}