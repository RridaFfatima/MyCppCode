#include<fstream>
#include<cstdlib>
#include<iostream>
using namespace std;
int main(){
ofstream ofile;
ofile.open("numbers.txt");
if(!ofile){
    cout<<"file not open"<<endl;

}
for(int i=0; i<10; i++){
    ofile<<i<<" "<<(rand()%70)+40;
    ofile<<endl;
}
ofile.close();
return 0;
}