#include<iostream>
#include<string>
using namespace std;
int main(){
    double arr[20];
    double sum=0.0;
    cout<<" enter 20 numbers";
    for(int i=0; i<20; i++){
        cin>>arr[i];
        sum+=arr[i];

    }
    cout<<endl;
    double average=0.0;
    average=sum/20;
    for(int i=0; i<20;i++){
    if(arr[i]>average){
        cout<<arr[i];
        cout<<endl;
    }
}
return 0;
}
