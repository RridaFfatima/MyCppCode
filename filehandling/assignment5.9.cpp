#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ofstream ofile("pattern4.ppm");
    if(!ofile){
    cout<<"file not open"<<endl;
    return 0;
}
ofile<<"P3"<<endl;
    ofile<<"256 256"<<endl;
    ofile<<"255"<<endl;
    for(int i=0; i<256; i++){
        for(int j=0; j<256; j++){
            int row=i/16;
           int col=j/16;
           if((row+col)%2==0){
            ofile<<"0"<<" "<<"0"<<" "<<"0"<<" ";
           }
           else{
            ofile<<"255"<<" "<<"255"<<" "<<"255"<<" ";
           }
        }
        ofile<<endl;
    }
    ofile.close();
    return 0;
}