
#include<iostream>
#include<string>
using namespace std;
int main(){
    double d1=80.25;
    char * p=(char*)&d1;
    for(int i=0; i<8; i++){
        cout<<"bytes "<<i<<" : "<<(int)*(p+i)<<endl;
    }
    return 0;
}