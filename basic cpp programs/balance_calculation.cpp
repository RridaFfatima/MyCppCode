#include <iostream>
#include <string>
using namespace std;

int main() {
    float initial_balance= 0,amount= 0;
    cout<<"Enter your initial balance:";
    cin>>initial_balance;
    while(true){
        cout<<"Enter amount to withdraw[0 to exit]:";
cin>>amount;
    if (amount == 0){
        cout<<"Loop terminated";
        cout<<endl;
        break;
    }
if(amount>initial_balance){
    cout<<"Insufficient balance."<<endl;
}
    else{
        cout<<"Transaction Successful.";
        cout<<"remaining balance:"<<initial_balance - amount<<endl;
    }

    }
    return 0;
}