#include <iostream> 
#include <string> 
using namespace std; 
string decryptCaesar(string ciphertext, int key) { 
 string plaintext = ""; 
 
 for (int i = 0; i < ciphertext.length(); i++) { 
 char ch = ciphertext[i]; 
 
 if (ch >= 'A' && ch <= 'Z') { 
 ch = (ch - 'A' - key + 26) % 26 + 'A'; 
 } 
 else if (ch >= 'a' && ch <= 'z') { 
 ch = (ch - 'a' - key + 26) % 26 + 'a'; 
 } 
 plaintext += ch; 
 } 
 return plaintext; 
} 
int main(){
    string ciphertext;
    cout<<"enter ciphertext: "<<endl;
    cin>>ciphertext;
    int key;
    cout<<"enter key: ";
    cin>>key;
string decrypted_data;
decrypted_data=decryptCaesar(ciphertext,key);
cout<<"encrypted message: " <<ciphertext;

cout<<" decrypted message: " <<decrypted_data;
return 0;
}
