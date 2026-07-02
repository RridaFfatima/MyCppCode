/*Write a program in CPP (without golden part of program) to output the nth number an in the
arithmetic sequence an = a0 + nd, where a0 is the first number in the sequence, and d is the
common difference. Later, using loop, print the whole sequence up to its nth item.*/
#include<iostream>
#include<string>
using namespace std;
int sequence(int an,int a0,int n,int d)
{
int term = a0+n*d;
an=term;
return an;
int i=1;
while(i<=n){
    an=term;
    
}
i++;

}
int main()
{
    int a0,n,d,an;
    cout<<"Enter the value of a0: ";
    cin>>a0;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the value of d: ";
    cin>>d;
    int result=sequence( an,a0,n,d);
    cout<<" The nth term is :"<< result<<endl;
    return 0;
}
