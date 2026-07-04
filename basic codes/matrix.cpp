#include<iostream>
#include<string>
using namespace std;
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int ar[3][3]={};
    for(int i=0; i<3; i++){
        for(int j=0; j<3;j++){
            ar[j][i]=arr[i][j];
        }
    }
    
        for(int i=0; i<3; i++){
          swap(ar[i][0],ar[i][2]);
            
    }
    
for(int i=0; i<3; i++){
        for(int j=0; j<3;j++){
            cout<<ar[i][j]<<" ";
        }

cout<<endl;
}
return 0;
 }  
