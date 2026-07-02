#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    string text=" my marksin 1st PF assignment are 88% in CLO2.";
    int i=0;
    while(text[i]!= '.'){
if(isalpha(text[i])){
    cout<<text[i];
}
if(isspace(text[i])){
    cout<<text[i];
}
if(isdigit(text[i])){
    cout<<"#";
}
 i++;
    }
   
    return 0;
}