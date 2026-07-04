#include<iostream>
#include<string>
using namespace std;
int main(){
    int arr[9]={8, 12, -7, 5, -1 ,-2, 8, -3, 6};
    int temp[9]={};
    int k=0;
    for(int i=0; i<9; i++){
        if(arr[i]<0){
            temp[k]=arr[i];
            k++;
        }

    }
    for(int i=0; i<9; i++){
        if(arr[i]>=0){
        temp[k]=arr[i];
        k++;

    }
}
    cout<<" new array: "<<endl;
    for(int i=0; i<9; i++){
        cout<<temp[i]<<",";

    }
    cout<<'\b'<<endl;
    return 0;


}
