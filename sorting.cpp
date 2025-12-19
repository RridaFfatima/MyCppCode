#include <iostream>
#include <string>
#include <array>
using namespace std;
int min_at(array<int,10>arr,int first_index){
    int min_index=first_index;
    for( int i=first_index+1;i<10;i++){
        if(arr[i]<arr[min_index])
        min_index=i;
}
return min_index;
}
array<int,10> selection(array<int,10>ar){
    int m;
    int t;
    for(int i=0;i<9;i++){
    m=min_at(ar,i);
    t= ar[i];
   ar[i]=ar[m];
    ar[m]=t;
    }
    return ar;
}
void output(array<int ,10>ar){
    int i=0;
    for(i=0;i<10;i++){
    cout<<ar[i] <<" ,";
    }
    cout<<endl;
    return;
    
}


int main()
{ 
    array<int,10>data={23,5,67,83,56,25,97,13,56,12};    
    output(data);
     data=selection(data);
     output(data);
    return 0;
}