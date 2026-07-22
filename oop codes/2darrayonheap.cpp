#include<iostream>
#include<string>
using namespace std;
int main(){

    int r=5;
    int c=4;

int ** myArray=new int *[r];
for(int i=0; i<r; i++){
    myArray[i]=new int [c];

}
for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        myArray[i][j]=i+j;
    }
}
for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        cout<<myArray[i][j]<<" ";
    }
    cout<<endl;
}
for(int i=0; i<r; i++){
    delete [] myArray[i];
}
delete [] myArray;

return 0;
}
