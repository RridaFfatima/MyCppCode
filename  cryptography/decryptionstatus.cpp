#include <iostream> 
#include <string> 
using namespace std; 
string decryptCaesar(string ciphertext, int key) { 
 string plaintext = ""; 
 
 for (int i = 0; i < ciphertext.length(); i++) { 
 char ch = ciphertext[i]; 
 
 if (ch >= 'A' && ch <= 'Z') { 
 ch = (ch +'A' + key) % 26 + 'A'; 
 } 
 else if (ch >= 'a' && ch <= 'z') { 
 ch = (ch +'a' + key) % 26 +'a'; 
 } 

 plaintext += ch; 
 } 
 return plaintext; 
} 
int main(){
    string ciphertext="KHOOR";
string decrypted_data;
int key=0;
    while(key<26){
    
decrypted_data=decryptCaesar(ciphertext,key);
if(decrypted_data=="HELLO"){
cout<<"VERY WEAK"<<endl;
}
else{
    cout<<"NORMAL"<<endl;
}
break;
}
key++;
}