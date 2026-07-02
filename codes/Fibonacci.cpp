/*Write a program to compute and print the nth value of the Fibonacci Sequence with a given n
input by console.*/
#include<iostream>
#include<string>
using namespace std;
int fibonacci(int n){
    int first=0;
    int second=1;
    int next =0;
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    for(int i=3;i<=n;i++){
next=first+second;
first=second;
second=next;
    }
    return next;
}
int main(){
    int n;
    cout<<"enter a number n to get nth vaue of fibonacci sequence: ";
    cin>>n;
    int result =fibonacci(n);
    cout<<" the nth value is "<<result<<endl;
    return 0;
}