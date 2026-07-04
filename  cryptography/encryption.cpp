#include <iostream> 
#include <string> 
using namespace std; 
string encryptCaesar(string plaintext, int key) { 
 string ciphertext = ""; 
 
 for (int i = 0; i < plaintext.length(); i++) { 
 char ch = plaintext[i]; 
 
 if (ch >= 'A' && ch <= 'Z') { 
 ch = (ch +'A' + key) % 26 + 'A'; 
 } 
 else if (ch >= 'a' && ch <= 'z') { 
 ch = (ch +'a' + key) % 26 +'a'; 
 } 

 ciphertext += ch; 
 } 
 return ciphertext; 
} 


int mian(){
    string plaintext;
    cout<<"enter plaintext: "<<endl;
    cin>>plaintext;
    int key;
    cout<<"enter key: ";
    cin>>key;
string encrypted_data;
encrypted_data=encryptCaesar(plaintext,key);
cout<<encrypted_data;
return 0;
}