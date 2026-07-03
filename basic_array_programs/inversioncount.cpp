#include<iostream>
#include<string>
#include<array>
using namespace std;
void count_inversions(array<int,5>arr){
    int count=0;
    
    for(int i=0; i<4;i++){
    for(int j=i+1; j<5; j++){
        if(arr[i]>arr[j]){
            count= count+1;
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
        }
    }
}
    cout<< " number of inversions :"<<count<<endl;
}

int main(){
    array<int,5>arr={1,2,3,4,5};
    count_inversions(arr);
    return 0;
}