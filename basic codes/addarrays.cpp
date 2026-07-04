#include<iostream>
#include<string>
using namespace std;
bool addArrays(int arr1[], int s1, int arr2[], int s2){
    if(s1==s2){
        for(int i=0; i<s1; i++){
            arr1[i]+=arr2[i];
            return true;
            cout<<"size same"<<endl;

        }
    }
    else{
        return false;
        cout<<"size different"<<endl;
    }
}
bool addarrays(int r1, int c1, int arr1[][3],  int r2, int c2, int arr2[][3]){
    if(r1==r2 && c1==c2){
        for(int i=0;  i<r1; i++){
            for(int j=0;j<c2;j++){
                arr1[i][j]+=arr2[i][j];
            }
        }
        return true;
    }
    else{
        return false;
    }

}
int main(){
int size1=3;
int size2=2;
int ar1[3]={1,2,3};
int ar2[2]={1,2};
int R1=3;
int R2=3;
int C1=3;
int C2=3;
int ar11[3][3]={{1,2,3},{4,5,6}};
int ar22[3][3]={{1,2,3},{4,5,6}};

bool result =addArrays(ar1,size1,ar2,size2);
cout<<result<<endl;
bool resultt=addarrays(R1,C1,ar11,R2,C2,ar22);
cout<<resultt<<endl;
return 0;
}