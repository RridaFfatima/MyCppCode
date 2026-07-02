#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include<sstream>
using namespace std;
int main(){
const int countries= 228;
const int columns = 6;
string finaldata[countries][columns];
int selectedcolforeachcountry[columns]={0,1,2,3,4,5};
string path= "/Users/nadeem/Documents/Mycode/countries of the world.csv";
 ifstream ifile(path);
 if(!ifile){
    cout<<" file not open"<<endl;
    return 0;
 }
 string readline;
 getline(ifile,readline);

 int rowcount=0;
 while( getline(ifile,readline) && rowcount<countries){
    stringstream ss(readline);
    string temporaryvaluestorage;
    int colindexinfile=0;
    int selcolindex=0;
    while(getline(ss,temporaryvaluestorage,',') && selcolindex<columns){
        if(colindexinfile==selectedcolforeachcountry[selcolindex]){
            finaldata[rowcount][selcolindex]=temporaryvaluestorage;
            selcolindex++;
        }
        colindexinfile++;
    }
    rowcount++;
 }
 ifile.close();
 ofstream ofile("countriesandcolumns.txt");
 if(!ofile){
    cout<<"file not open"<<endl;
    return 0;
 }
 ofile<<left<<setw(28)<<"Country"<<left<<setw(12)<<"Region"
	 <<right<<setw(19)<<"Population"<<right<<setw(20)<<"Area"
	 <<right<<setw(20)<<"Density"<<right<<setw(20)<<"costline"
	 <<endl;
     for(int i=0; i<rowcount; i++){
        ofile<<left<<setw(28)<<finaldata[i][0]
             << right << setw(12) << finaldata[i][1]
              << right << setw(12) << finaldata[i][2]
              << right << setw(15) << finaldata[i][3]
              << right << setw(12) << finaldata[i][4]
              << right << setw(12) << finaldata[i][5]
              << endl;
    }
    ofile.close();
    return 0;
     }

