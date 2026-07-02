#include<iostream>
#include<string>
#include<array>
using namespace std;
int main(){
    int c;
    cout<<"how many no. you want to enter(less than 50)"<<endl;
    cin>>c;
    array<int,50>arr;
    cout<<"Enter N integers(less than 50)"<<endl;
    
    for(int i=0; i<c; i++){
        cin>>arr[i];
    }
    float sum=0.0;
    for(int i=0; i<c; i++){
        sum+=arr[i];
    }
    float average;
    average=sum/c;
    cout<<"numbers greater than average are: "<<endl;
    for(int i=0; i<c; i++){
    
        if(arr[i]>average)
        {
            cout<<arr[i]<<endl;
        }
    }
    return 0;
}