#include<iostream>
#include<string>
using namespace std;

int main(){
    int arr[9]={12,8,9,5,2,20,6,3};
    for(int i=0; i<9; i++){
        for(int j=i+1; j<8; j++){
        int max=0;
        int min=0;
        if(arr[i]>arr[j]){
        max=arr[i];
        min=arr[j];
    }
    else{
        max=arr[j];
        min=arr[i];
    }
    if(max%min==0){
        cout<<arr[i] <<"-"<<arr[j]<<"  ";
    }


}

    }
    return 0;
}