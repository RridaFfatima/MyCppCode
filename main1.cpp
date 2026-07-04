#include "fraction.h"
#include<iostream>
using namespace std;
int main(){
    Fraction f1(2,3);
    Fraction f2(1,5);
    Fraction f3=f1+f2;
    cout<<"addition of f1+f2, f3 becomes: "<<endl;
    f3.display();
    cout<<endl;

    Fraction f4=f1-f2;
    cout<<"subtraction of f1-f2, f4 becomes: "<<endl;
    f4.display();
    cout<<endl;

    Fraction f5=f1*f2;
    cout<<"multiplication of f1*f2, f5 becomes: "<<endl;
    f5.display();
    cout<<endl;

    Fraction f6=f1/f2;
    cout<<"division of f1/f2, f6 becomes: "<<endl;
    f6.display();
    cout<<endl;
    Fraction f7(3,4);
    Fraction f8(2,5);
    f7+=f8;
    cout<<"f7+=f8 , f7 becomes: "<<endl;
    f7.display();
    cout<<endl;

    f7-=f8;
    cout<<"f7-=f8 , f7 becomes: "<<endl;
    f7.display();
    cout<<endl;
    f7*=f8;
    cout<<"f7*=f8 , f7 becomes: "<<endl;
    f7.display();
    cout<<endl;
    f7/=f8;
    cout<<"f7/=f8 , f7 becomes: "<<endl;
    f7.display();
    cout<<endl;

    if(f1==f2){
        cout<<"YES, f1=f2"<<endl;
    }
    else{
        cout<<"NO, f1!=f2"<<endl;
    }
    cout<<endl;

    if(f1!=f2){
        cout<<"YES, f1!=f2"<<endl;
    }
    else{
        cout<<"NO, f1==f2"<<endl;
    }
    cout<<endl;
    
    if(f1<=f2){
        cout<<"YES, f1<=f2"<<endl;
    }
    else{
        cout<<"NO, f1 is not <= f2"<<endl;
    }
    cout<<endl;

     if(f1>=f2){
        cout<<"YES, f1>=f2"<<endl;
    }
    else{
        cout<<"NO, f1 is not >= f2"<<endl;
    }
    cout<<endl;

    if(f1<f2){
        cout<<"YES, f1<f2"<<endl;
    }
    else{
        cout<<"NO, f1 is not less than f2"<<endl;
    }
    cout<<endl;

     if(f1>f2){
        cout<<"YES, f1>f2"<<endl;
    }
    else{
        cout<<"NO, f1 is not greater than f2"<<endl;
    }
    cout<<endl;

    cout<<"(--f1): ";
    (--f1).display();
    cout<<endl;
    cout<<endl;

    cout<<"(++f1): ";
    (++f1).display();
    cout<<endl; 
    cout<<endl; 

    cout<<"(f2--): ";
    (f2--).display();
    cout<<endl;
    cout<<endl; 

    cout<<"(f2++): ";
    (f2++).display();
    cout<<endl;
    cout<<endl; 

    double d =f1;
    cout<<" f1 as. double is:" <<d<<endl;
    cout<<endl;

    cout<<"  f10 is: ";
    Fraction f10(-6,7);
    f10.display();
    cout<<endl;
    cout<<"negative of f10 is: "<<endl;
    (-f10).display();
    cout<<endl;
    cout<<endl;
    
    Fraction f9(2,-5);
    cout<<"f9is: "<<endl;
    f9.display();
    f9.reduce();
    cout<<"after reducign to make denominator positive: "<<endl;
    f9.display();





    return 0;
}