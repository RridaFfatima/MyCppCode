/*In a very large sized array, the values are repeated between 21 and 30, you have to compute
frequency of each value into an array of size 10.*/
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
srand(time(0));
    int size;
    cout<<"enter size for a large array : ";
    cin>>size;
    int max=30;
    int min=21;
    int range=max-min;
    int ar[size];
    for(int j=0; j<size; j++){
        ar[j]=(rand()% (range+1))+min;
    }
    int frequency[10]={0};
    int index=0;
    for(int i=0; i<size; i++){
        index=ar[i]-21;
        frequency[index]++;
    }
    for(int i=0; i<10; i++){
    cout<<" frequency array is: "<<frequency[i]<<endl;
    }
    return 0;
    }
