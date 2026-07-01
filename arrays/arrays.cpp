// output ,min,max,search,acumulation,reverse,bubble sort ,ascending,descending

#include <iostream>
#include <string>
#include <array>
using namespace std;
void output (array<int,5> arr){
    for(int i=0; i<5; i++)
    {
        cout<<arr[i];
        cout<<" ";
    }
    cout<<endl;
}

int Min(array<int,5>arr){
int min=arr[0];
for(int i=0; i<5;i++){
    if(arr[i]<min)
    min=arr[i];
}
return min;
}
int Max(array<int,5>arr){
int max=arr[0];
for(int i=0; i<5;i++){
    if(arr[i]>max)
    max=arr[i];
}
return max;
}
void search(array<int,5>arr,int key)
{
    bool find=false;
    for(int i=0; i<5;i++){
        if(arr[i]==key){
        find=true;
        cout<<"found at index"<<i<<endl;
        break;
        }
    }
    if(!(find)){
        cout<<"not found"<<endl;
    }
}
int sumarray(array<int,5>arr){
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=arr[i];
    }
    return sum;
}
void reverse(array<int,5>&arr){
    int start=0;
    int end=4;
    while(start<end){
        int t=arr[start];
        arr[start]=arr[end];
        arr[end]=t;
        start++;
        end--;
    }
    
}
void bubble(array<int,5>&arr){//copy is made ,original array remains unchanged ,function works on copy
    for(int i=0;i<5;i++){
        int q=0;
        if(arr[i]<arr[i+1]){

          q=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]= q ;
    }
}
return;
}
int main(){
    array<int,5>arr={1,4,6,2,7};
    output(arr);
    cout<<endl;

    Min(arr);
        cout<<"min="<<Min(arr)<<endl;
         Max(arr);
        cout<<" max ="<<Max(arr)<<endl;

    search(arr,4);
        cout<<endl;

    sumarray(arr);
        cout<<sumarray(arr)<<endl;

    reverse(arr);
    output(arr);

    bubble(arr);
    output(arr);

    return 0;
}