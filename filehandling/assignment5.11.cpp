# include <iostream>
# include <string>
# include <fstream>
# include <sstream>
using namespace std;
int main(){
	string path= "/Users/nadeem/Documents/Mycode/pattern6.ppm";
 ifstream ifile(path);
	ofstream ofile ("pattern8.ppm");
	if(!ifile){
		cout<<"error!!";
		return 0;
	}
	if(!ofile){
		cout<<"error!!";
		return 0;
	}
	
	string s;
for(int i=0; i<3;i++){
getline(ifile,s);
ofile<<s;
ofile<<endl;
}
	
	
	int r,g,b;
	for(int i=0; i<256; i++){
		for(int j=0; j<256; j++){
			ifile>>r>>g>>b;
			int invr = 255-r;
			int invg = 255-g;
			int invb = 255-b;
			ofile<<invr<<" "<<invg<<" "<<invb<<" ";
		}
		ofile<<endl;
	}
	ifile.close();
	ofile.close();
	cout<<"image inverteed!!";
	return 0;
}