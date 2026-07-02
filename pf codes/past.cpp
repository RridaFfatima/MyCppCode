#include<iostream>
#include<string>
using namespace std;
int ps(int n)
{
    int i=0;
    while(i<=n){
    if(i*i==n){
    
        cout<<i;
        return 0;
    }
        
    i++;
}
cout <<"not a perfect square.";
return 0;
}
int main()
{
    int num;
    cout<<"Enter a number  ";
    cin>>num;
   ps(num);
  
    return 0;
    }
