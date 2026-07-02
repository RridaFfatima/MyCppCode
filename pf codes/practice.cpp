#include<iostream>
#include<string>
using namespace std;
int main(){
    int size;
    cout<<"enter size of array: ";
    cin>>size;
    int arr[size];
    cout<<"enter array elements: "<<endl;
    for (int i=0; i<size; i++){
        cin>>arr[i];
    }
    int reversedarr[size];
    for(int i=size-1; i>=0; i--){
        reversedarr[size-1-i]=arr[i];
    }
    for(int i=0; i<size; i++){

        cout<<reversedarr[i];
        if(i<size-1){
            cout<<",";
        }

    }
    return 0;
}