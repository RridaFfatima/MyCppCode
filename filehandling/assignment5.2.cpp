#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ofstream ofile("strips1.pgm");
    if(!ofile){
    cout<<"file not open"<<endl;
    return 0;
}
    ofile<<"P2"<<endl;
    ofile<<"256 256"<<endl;
    ofile<<"3"<<endl;
    for(int i=0; i<256; i++){
        for(int j=0; j<256; j++){
            if(i<64){
                ofile<<"2"<<" ";
            }
            else if(i<128){
                ofile<<"0"<<" ";
            }
            else if(i<192){
                ofile<<"3"<<" ";
            }
            else{
                ofile<<"1"<<" ";
            }
        }
        ofile<<endl;
    }
    ofile.close();
    return 0;

}