#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
    int *arr=nullptr;
    int count=0; 
    int temp;
	string path= "/Users/nadeem/Documents/Mycode/input.txt";
    ifstream ifile(path);
    if(!ifile){
        cout<<"file not open"<<endl;
        return 0;
    }
    while(ifile>>temp){
        int * newArray= new int[count+1];
        for(int i=0; i<count; i++){
            newArray[i]=arr[i];
        }
        newArray[count++]=temp;
        delete []arr;
        arr=newArray;
       
    }
     for(int i=0; i<count; i++)
        cout<<arr[i]<<endl;
    

    return 0;
}