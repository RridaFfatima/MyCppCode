#include<iostream>
#include<string>
#include<array>
using namespace std;
int sentinel=-1;
void makearrayempty(int a[], const int as){
    for(int i=0; i<as; i++){
        a[i]=sentinel;
    }
    return ;
}
void addData(int data, int arr[], int as){
    int i=0;
        while(i<as && arr[i]!=sentinel && data>arr[i])
        { 
 i++;

        }
       
for(int j=as-1; j>i; j--){
        arr[j]=arr[j-1] ;
    }
     arr[i]=data;
    return;
}

void removeData(int data, int arr[], int as){
    int i=0;
    while(i<as ){
        if(data==arr[i]){
        

    
    for(int j=i; j<as-1; j++){
        arr[j]=arr[j+1] ;
    }
arr[as-1]=sentinel;
}
    else {
        i++;
    }
    }
    
    
return;
}
void updateData(int oldData, int newData, int arr[], int as){
    removeData(oldData,arr,as);
    addData(newData,arr,as);
    return ;
}
void showArray(int arr[], int as){
    for(int i=0; i<as; i++){
        if(arr[i]!= sentinel)
        {
            cout<<arr[i]<<",";
        }
    }
    return ;
}
int main(){
    const int  as=1000;
    int a[as];
   
    makearrayempty(a,as);
    addData(63, a, as);
addData(19, a, as);
addData(47, a, as);
showArray(a, as); 
cout<<endl;
updateData(19, 80, a, as);
showArray(a, as); 
cout<<endl;

addData(47, a, as); 
addData(59, a, as);
addData(22, a, as);
showArray(a, as); 
cout<<endl;

removeData(47, a, as);
showArray(a, as);
cout<<endl;
return 0;
}