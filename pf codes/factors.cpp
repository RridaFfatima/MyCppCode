#include<iostream>
#include<string>
#include<cmath>
using namespace std;
void find_factors(int a,int b,int c)
{
    float disc=(b*b)-4*a*c;
    if(disc >0)
    {
        float root1=(-b + sqrt(disc))/2*a;
        float root2=(-b - sqrt(disc))/2*a;
        cout<<"The factors are (x - "<<root1<<") and (x  - "<<root2<<")"<<endl;
cout<<"Roots are real and distinct."<<endl;
    }
    else if(disc==0)
    { 
        float root=-b/2*a;
cout<<"The factors are (x - "<<root<<") and (x -  "<<root<<")"<<endl;
cout<<"Roots are real and equal."<<endl;
    }
    else{
        float real_part= -b/2*a;
        float imaginary_part= (sqrt(disc))/2*a;
        cout<<"The factors are (x - "<<real_part<<"+"<<imaginary_part<<"i"<<" )and (x - "<<real_part<<"-"<<imaginary_part<<"i)"<<endl;
cout<<"Roots are complex and imaginary."<<endl;
    }
}
int main(){
    int a,b,c;
    cout<<"Enter the value of a,b,c :"<<endl;
    cin>>a>>b>>c;
    find_factors(a,b,c);
    return 0;
}