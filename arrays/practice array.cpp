#include<iostream>
#include<string>
#include<array>
using namespace std;
 void merge_sorted_arrays(array<int,4>arr1,array<int,0>arr2){
    array<int,4>merge;
    int j=0; int k=0;
    int i=0;
        while(j<4 &&  k<0 ){
            if(arr1[j]<= arr2[k]){
        merge[i++]=arr1[j++];
    }
    else{
        merge[i++]=arr2[k++];
    }}
    while(j<4){
        merge[i++]=arr1[j++];
    }
    while(k<0){
        merge[i++]=arr2[k++];
    }

 for  (int i=0; i<4; i++){
    cout<<merge[i];
 }
}
 
int main(){
    array<int,4>arr1={1,5,5,10};
    array<int,0>arr2={};
merge_sorted_arrays(arr1,arr2);
return 0;

}