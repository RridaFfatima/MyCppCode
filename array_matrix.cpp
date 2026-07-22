#include<iostream>
#include<string>
using namespace std;
int main(){
    int x[5]={1,2,3,4,5};
    int y[4][5]={};
    for(int i=0; i<5; i++){
        for(int j=0;j<4; j++){
            y[j][i]=x[i];
        }
    }
    for(int i=0; i<5; i++){
        for(int j=0; j<4 ; j++){
            cout<<y[j][i];
        }
        cout<<endl;
    }
    return 0;
}