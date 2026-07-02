#include<fstream>
#include<iostream>
using namespace std;
int main(){
ifstream ifile;
ifile.open("numbers.txt");
if(!ifile){
    cout<<"error"<<endl;
}
int a[10];
int i=0; 
while(i<10){

    ifile>>a[i];
    cout<<a[i]<<endl;
    i++;
}
ifile.close();
return 0;
}