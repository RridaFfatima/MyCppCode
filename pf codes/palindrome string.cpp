#include<iostream>
#include<string>
#include<array>
using namespace std;
bool palindrome(string words,int length){
    for(int i=0;i<length/2; i++){// we divide length by 2 because we check half of it bcz if its true the other half will. mirrror it means it will be same
        if(words[i]!= words[length-i-1]){//the index will move from6 to 5 and so on cause i increases so 
        return false;
    }
}
    return true;
    
    
}



int main(){
    array<string ,7>words={"cat", "level", "program", "racecar", "madam", "bye", "I"};
array<int,7>length={3,5,6,7,5,3,1};
cout<<"palindromes are :" <<endl;
for(int i=0;i<7;i++){
    if(palindrome (words[i],length[i])){//calling the function
        cout<<words[i]<<endl;//if true then printing the word 
    }

}
return 0;
}