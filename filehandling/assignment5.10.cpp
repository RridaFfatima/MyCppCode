#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ifstream ifile("pattern3.pgm");
    if(!ifile){
    cout<<"error"<<endl;
    return 0;
}

    ofstream oofile("pattern5.pgm");
      if(!oofile){
    cout<<"file not open"<<endl;
    return 0;
}
string s;
for(int i=0; i<3;i++){
getline(ifile,s);
oofile<<s;
oofile<<endl;
}
for(int i=0; i<256; i++){
        for(int j=0; j<256; j++){
            int a;
            ifile>>a;
            oofile<<255-a<<" ";
        }
        oofile<<endl;
    }


 oofile.close();
ifile.close();
return 0;
}

