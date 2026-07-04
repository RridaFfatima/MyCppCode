#include<iostream>
#include<string>
using namespace std;
bool ispalindrome(char arr[], int size){
    for(int i=0; i<size/2; i++){
        if(arr[i]==arr[size-1]){
            return true;
            cout<<"is palindrome"<<endl;
        }
        

    else{
        return false;
        cout<<"is not palindrome"<<endl;
    }

}
}

int main(){
    int size;
    cout<<"enter size of array: ";
    cin>>size;
    char arr[size];
    cout<<" Enter input array: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    bool result=ispalindrome(arr,size);
    cout<<result;
    return 0;


}