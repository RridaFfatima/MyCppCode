/*Write a function to search for the value closest to a given n input by console.*/
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int closest_value( int arr[], int size, int n){
     int closest = arr[0];
    int min_difference = abs(arr[0] - n);
            for(int i=1;i<size; i++){
     int diff=abs(arr[i]-n);
        if(diff< min_difference){
            min_difference=diff;
                        closest= arr[i];

        }
    }
    return closest;

}
int main(){
    srand(time(0));
    int size;
    cout<<" enter value for size of array: ";
    cin>>size;
     int i=0;
    int min=100;
    int max=999;
int arr[size];
    while(i<size){
        arr[i]=(rand()%(max-min+1) + min);
        i++;
    }
    int n;
    cout<<"enter value to find its closest : ";
    cin>>n;
    cout<< "array is: "<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    int result=closest_value( arr,size, n);
    cout<<" The closest to n is: " <<result<<endl;
    return 0;
}