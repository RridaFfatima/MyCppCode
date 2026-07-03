#include<iostream>
#include<string>
#include<array>
using namespace std;
 void merge_sorted_arrays(array<int,3>arr1,array<int,3>arr2){
    array<int,6>merge;
    int j=0; int k=0;
    int i=0;
        while(j<3 &&  k<3 ){
            if(arr1[j]<= arr2[k]){
        merge[i++]=arr1[j++];
    }
    else{
        merge[i++]=arr2[k++];
    }}
    while(j<3){
        merge[i++]=arr1[j++];
    }
    while(k<3){
        merge[i++]=arr2[k++];
    }

 for  (int i=0; i<6; i++){
    cout<<merge[i];
 }
}
 
int main(){
    array<int,3>arr1={4,5,6};
    array<int,3>arr2={1,2,3};
merge_sorted_arrays(arr1,arr2);
return 0;

}