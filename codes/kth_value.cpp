/*Please write a program to find the kth ranked value in an array of size n, where n >= k, without
sorting array. The kth ranked value is the value at kth location in array, if it is sorted.*/
#include<iostream>
#include<string>
using namespace std;
int location(int arr[], int size,int k){
    int i;
    int count;
    for( i=0; i<size; i++){
        count=0;
            for(int j=0; j<size; j++){
                if(arr[j]<arr[i]){
                    count++;
                }
            }
        
            if(count==k-1)
    return arr[i];

    }
}
int main(){
    srand(time(0));

    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    cout<<endl;
    int k;
    cout<<"enter kth position: ";
cin>>k;
cout<<endl;
    int arr[size];
    int i=0;
    int min=100;
    int max=999;

    while(i<size){
        arr[i]=(rand()%(max-min+1) )+ min;
        i++;
    }
    int result=location(arr,size,k);
    cout<<result<<endl;
    return 0;
}