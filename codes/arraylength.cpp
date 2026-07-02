/*Write a program to find the length of the longest contiguous subarray whose sum is exactly a
given k input by console.*/
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;
int contiguous(int arr[],int size,int n){
    int max_length=0;
   int length=0;
   for(int i=0; i<size; i++){
       int sum =0;
for(int j=i;j<size; j++){
    sum+=arr[j];
   if(sum==n){
length =j-i+1;
if (length>max_length){
    max_length=length;
}
   }
   
}
   }
return max_length;
}
int main(){
    srand(time(0));
    int size, k;
    cout<<"enter size of array: ";
    cin>>size;
    cout<<"enter a number k : ";
    cin>>k;
    int ar[size];
    int i=0;
    int min=100;
    int max=999;
    while(i<size){
        ar[i]=(rand()%(max-min+1)) + min;
        i++;
    }
    for(int i=0; i<size; i++){
        cout<<ar[i]<<",";
    }
    cout<<endl;
    int result = contiguous(ar,size,k);
    cout<<result;
    cout<<endl;
    return 0;
}