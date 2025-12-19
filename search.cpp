#include<iostream>
#include<array>
using namespace std;
bool search_integer(int n, array<int ,10>arr){
 int i=0; 
 for(i=0;i<10;i++){ 
    if(arr[i]==n){ //checks if the no. n we are searchinng for is present in the array
        return true;   
        }
    }
        return false;
    
}
int main(){
        array<int,10>x={1,2,3,4,5,6,7,8,9,0};
        array<int,5>y={5,3,7,1,9};
        bool allpresent =true;//variable which is given the value true
        for(int i=0; i<5;i++){
            if(!(search_integer(y[i],x))){//same pattern  first the arrray to search,array from which to search
                allpresent =false;
            }
        }
        if(allpresent){
            cout<<"All integers of y array is present in x array."<<endl;
        }
        else{
            cout<<"not all int of y are present in x."<<endl;
        }
}
