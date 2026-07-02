#include<iostream>
#include<string>
#include<array>
using namespace std;
void addData(int data, int arr[],int as, int &ds){
if(ds>=as)   {
    cout<<"array is full"<<endl;
    return;
}
int i=ds-1;
while(i>=0 && arr[i]>data){
    arr[i+1]=arr[i];
    i--;
}
arr[i+1]=data;
ds++;
    return;
}

void removeData(int data, int arr[], int as, int &ds){

    int i=0;
    while(i<ds ){
        if(arr[i] == data){
        

    
    for(int j=i; j<ds-1; j++)
        arr[j]=arr[j+1] ;
        ds--;
    
}
    else {
        i++;
    }
    }
    
    
return ;
}
void updateData(int oldData, int newData, int arr[], int as, int ds){
    removeData(oldData,arr,as,ds);
    addData(newData,arr,as,ds);
    return ;
}
void showArray(int arr[], int as,int ds){
if(as>=ds){


    for(int i=0; i<ds; i++){
       
        {
            cout<<arr[i]<<",";
        }
    }
}
    return ;

}
int main(){
    const int  as=1000;
    int a[as];
int ds=0;

addData(63, a, as,ds);
addData(19, a, as,ds);
addData(47, a, as,ds);
showArray(a,as,ds); 
cout<<endl;
updateData(19, 80, a, as,ds);
showArray(a,as,ds); 
cout<<endl;

addData(47, a, as,ds); 
addData(59, a, as,ds);
addData(22, a, as,ds);
showArray(a,as,ds); 
cout<<endl;
removeData(47, a,as,ds);
showArray(a,as,ds);
cout<<endl;
   return 0;
}