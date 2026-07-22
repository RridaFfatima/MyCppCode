#include<iostream>
#include<string>
using namespace std;
int main(){
    int r=6;
    int ** arr=new int*[r];
    for(int i=0; i<r; i++){
        arr[i]=new int [i+1];

        arr[i][0]=1;
        arr[i][i]=1;

        for(int j=1;j<i;j++){
            arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
        }
        for(int j=0; j<=i; j++){
    
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    }
    for(int i=0; i<r; i++){
        delete [] arr[i];

    }
    delete [] arr;
    
    return 0;
}