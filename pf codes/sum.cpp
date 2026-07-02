#include<iostream>
#include<string>
using namespace std;
int find_sum(int n)
{ 
    int i=0;
        int sum=0;

    while(i<n) {
     sum += n%10; // gets the last digit and adds it to sum
     n=n/10; //removes the last digit and the new number becomes n
    }
     return sum;
    
}
bool wrestlerinteger(int a, int b)
{
int SumA=find_sum(a); //calling th efunction to find sum
int SumB=find_sum(b);//stores the result not the process
if(SumA > SumB){
    return(true);
}
else{
    return(false);
}
}
int main(){
    int a,b;
    cout<<"Enter two integers: "<<endl;
    cin>>a>>b;
    cout<<"Sum of digits of"<<a<<" is "<<find_sum(a)<<endl;
    cout<<"Sum of digits of"<<b<<" is "<<find_sum(b)<<endl;
    if(wrestlerinteger(a,b)){
        cout<<a<<" is a wretsler; it defeats"<< b <<endl;
    }
    else{
         cout<<b<<" is a wretsler; it defeats"<< a<<endl;
    }
    return 0;
}