#include <iostream>
#include<string>
using namespace std;

int gcd(int x,int y)
{
    int g=x;
    int r;
do
{
    r=y%g;
     if(r==0)
     return g;
    y=g;
    g=r;
    }
while (r!=0);
return g;
}
int lcm (int x, int y)
{
    return (x*y)/gcd(x,y);
}
int main()
{
    
    int GCD=gcd(36,16);
    int LCM=lcm(36,16);
    cout<<"GCD is: "<<GCD<<endl;
    cout<<"LCM is:"<<LCM<<endl;
    return 0;
}
