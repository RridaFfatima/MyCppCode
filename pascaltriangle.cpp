#include<iostream>
#include<string>
using namespace std;
int ** createPascalTriangle(int n){
    int rows=n;
    int ** arr=new int *[rows];
    for(int i=0; i<rows; i++){
        arr[i]=new int[rows];
        arr[i][0]=1;
         arr[i][i]=1;
         for(int j=1; j<i; j++){
            arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
         }

    }
    return arr;
}
void displayPascalTriangle(int **pt, int n){
    for(int i=0; i<n; i++){
        for(int j=0 ;j<=i; j++){
            cout<<pt[i][j]<<" ";
        }
        cout<<endl;
    }
}
void deallocatepascalTriangle(int **pt, int n){
    for(int i=0 ; i<n; i++){
        delete [] pt[i];
    }
    delete [] pt;
}
int main(){
    cout<<"enter value for pascal trianlge: "<<endl;
    int n;
    cin>>n;
    int ** pt=createPascalTriangle(n);
    displayPascalTriangle(pt,n);
    deallocatepascalTriangle(pt,n);
    return 0;

}