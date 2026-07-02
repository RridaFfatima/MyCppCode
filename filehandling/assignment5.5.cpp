#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ofstream ofile("pattern1.pgm");
    if(!ofile){
    cout<<"file not open"<<endl;
    return 0;
}
ofile<<"P2"<<endl;
    ofile<<"256 256"<<endl;
    ofile<<"255"<<endl;
    for(int row=0; row<256; row++){
        for(int col=0; col<256; col++){
            ofile<<(row+col) % 255<<" ";
        }
        ofile<<endl;
    }
    ofile.close();
    return 0;
}
