#include<iostream>
#include<string>
#include<array>
#include<exception>
using namespace std;
int calculate_min_change(array<int,2>arr, int total_cost, int cash_paid){
    int balance_due;
balance_due =cash_paid - total_cost;
if(cash_paid<total_cost){
    runtime_error ex("ERROR: CASH PAID IS LESS THAN TOTAL COST.");
    cout<<ex.what();
}
if(balance_due==0){
    return 0;
}

for(int j=0;j<2;j++){
    int t=0;
if(arr[j]<arr[j+1]){
        t=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=t;
    }
    }
int count=0;
int remainder=balance_due;
for(int i=0; i<2;i++){
while(remainder>=arr[i]){
    if(count>0){
        cout<<"+";
    }
    cout<<arr[i];
    remainder=remainder-arr[i];
    count++;
}
}
cout<<endl;
if(remainder!=0){
    runtime_error ex(" ERROR!INSUFFICIENT NOTES");
    cout<<ex.what()<<endl;
}
return count;
}
int main(){
    array<int,2>arr={10,20};
    int total_cost = 50;
    int cash_paid = 45;
    int count;
count =calculate_min_change(arr,total_cost,cash_paid);
cout<<count;
return 0;
}