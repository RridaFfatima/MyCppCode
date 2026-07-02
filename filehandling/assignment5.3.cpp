#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ofstream ofile("strips2.pgm");
    if(!ofile){
    cout<<"file not open"<<endl;
    return 0;
}
ofile<<"P2"<<endl;
    ofile<<"256 256"<<endl;
    ofile<<"15"<<endl;
    for(int i=0; i<256; i++){
        for(int j=0; j<256; j++){
            ofile<<i/16<<" ";
}
ofile<<endl;
    }
    ofile.close();
    return 0;
}