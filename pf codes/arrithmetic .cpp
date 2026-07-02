/*Write a program in CPP (without golden part of program) to output the nth number an in the
arithmetic sequence an = a0 + nd, where a0 is the first number in the sequence, and d is the
common difference. Later, using loop, print the whole sequence up to its nth item.*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    int a0,n,d;
    cout<<"Enter the value of a0: ";
    cin>>a0;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the value of d: ";
    cin>>d;
    int an=a0+(n)*d;
    cout<<"The nth term is : "<<an<<endl;
    int i=0;
    cout<<"The sequence is:";
    while(i<n){
        
        cout<< a0+i*d<<" ,";
        i++;
    }
    cout<<endl;
    return 0;
}