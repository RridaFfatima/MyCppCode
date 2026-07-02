/*Please write a program to remove duplicates in a sorted array of dynamic size with data size
variable. The 15 sized array {0,0,0,3,4,4,5,8,8,8,8,8,8,9,9,9,4,6,34,32,32,54,34,54,...} should
be a 6 sized array as {0,3,4,5,8,9,5,8,8,8,8,8,8,9,9,9,4,6,34,32,32,54,34,54,...} after removal of
duplicates in data.*/
#include<iostream>
#include<string>
using namespace std;
int remove_duplicates(int arr[], int size){
    if(size==1 || size==0){
        return size;
    }
    int new_index =1;
    for(int i=1; i<size ; i++){
        if(arr[i]!=arr[i-1]){
            arr[new_index]=arr[i];
            new_index++;
        }
    }
    return new_index;
}
int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int ar[size];
    cout<<" enter array elemnts (can be duplicate):"<<endl;
for(int i=0; i<size; i++){
    cin>>ar[i];
}
    /*int i=0;
    int min=100;
    int max=999;
    while(i<size){
        ar[i]=(rand()%(max-min+1)) + min;
        i++;
    }
        */
    int result=remove_duplicates(ar,size);
    cout<<" new array size is "<<result<<endl;
    return 0;
}