#include<iostream>
#include<string>
#include<stdexcept>
using namespace std;
 int find_first_dna_match(string dna_sequence, string pattern){
 int count =0;
int i=0;
while (dna_sequence[i]!='\0'){
    count++;
    i++;
}
int counnt=0;
int k=0;
while(pattern[k]!='\0'){
    counnt++;
    k++;
}
if(counnt==0){
    runtime_error er( "ERROR! Pattern is empty");
cout<<er.what();
}
for(int i=0;i<=count-counnt;i++){
    bool match =true;

    for(int j=0;j<counnt;j++ )
        if(dna_sequence[i+j]!=pattern[j]){
            match=false;
break;
        }
        if(match){
            return i;
        }
}

runtime_error err( "ERROR! no match found");
cout<<err.what();
return -1;
}

 
 int main(){
    string dna_sequence="ATCGATCG";
    string pattern="";
    int result = find_first_dna_match(dna_sequence,pattern);
    cout<<result;
    return 0;

 }