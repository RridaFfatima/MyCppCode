#include<iostream>
#include<string>
using namespace std;
int main(){
    int arr[4][4]={{1,2,3,4},{1,2,3,4},{1,2,0,4},{1,2,3,4}};
    for(int i=0;i<4; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<3; i++){
        for(int j=0; j<3; j++){
            if(arr[i][j]==0){
                int k=i;
            int l=j;
            
            for(int m=0; m<4; m++){

                arr[k][m]=0;
                arr[m][l]=0;
            }


        }

    }
    }
    cout<<endl;
    for(int i=0;i<4; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }

    return 0;
}