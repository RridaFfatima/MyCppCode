#include<iostream>
#include<string>
using namespace std;
int palindrome(int n){
    int t=n;
    int rev=0;
    int digit=0;
    while(t>0){
        digit=t%10;
        rev=rev*10+digit;
        t/=10;

    }
    return (rev==n);
}
int main(){

    cout<<"palindrome numbers are:" <<endl;
    for(int i=1; i<=1000; i++){
        if(palindrome(i)){
        cout<<i<<endl;
    }
    }
    return 0;
}