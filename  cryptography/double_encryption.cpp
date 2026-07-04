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
int main(){
    string plaintext;
    cout<<"enter plaintext: "<<endl;
    cin>>plaintext;
    int key1;
    cout<<"enter key 1: ";
    cin>>key1;
string encrypted_data;
cout<<"original: "<<plaintext<<endl;
encrypted_data=encryptCaesar(plaintext,key1);
cout<<"after first encryption; "<< encrypted_data<<endl;
int Key2;
    cout<<"enter key 2: ";
    cin>>Key2;
string encrypted_data2;
encrypted_data2=encryptCaesar(encrypted_data,Key2);
cout<<"after second encryption: " <<encrypted_data2<<endl;
return 0;
}

