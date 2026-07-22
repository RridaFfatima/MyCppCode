#include<iostream>
#include<string>
using namespace std;
void getPosNeg(const int ar[], const int n_ar, int* &pos, int& n_pos, int* &neg, int& n_neg){
    n_pos=0;
    n_neg=0;
    for(int i=0; i<n_ar;i++){
        if(ar[i]>=0){
            n_pos++;
        }
        else{
            n_neg++;
        }
    }
    int k=0;
    int j=0;

    if(n_pos>0){
       pos= new int[n_pos];
       for(int i=0; i<n_ar; i++){
        if(ar[i]>=0){
        pos[k]=ar[i];
        k++;
       }
    }
}
    else  {
        pos=nullptr;

    }


   if(n_neg>0){
       neg= new int[n_neg];
        for(int i=0; i<n_ar; i++){
    if(ar[i]<0){
        neg[j]=ar[i];
        j++;
    }
}
   }
    else{
        neg=nullptr;
    }
return; 
}
int main(){
    int size=5;
    int arr[5]={1,-2,3,-4,5};
    int npos=0;
    int nneg=0;
    int *pos=nullptr;
    int *neg=nullptr;
    getPosNeg(arr,size,pos,npos,neg,nneg);
    if(npos>0){
        cout<<"positive numbers are: "<<endl;
    for(int i=0; i<npos; i++){
        cout<<pos[i]<<" ";
    }
    cout<<endl;
}
else{
    cout<<"no positive elements"<<endl;
}
if(nneg>0){
        cout<<"negative numbers are: "<<endl;
    for(int j=0; j<nneg; j++){
        cout<<neg[j] <<" ";
    }
    cout<<endl;
}
else{
    cout<<"no negative elements."<<endl;
}
    delete []pos;
    delete []neg;
    return 0;

}