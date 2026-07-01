#include <iostream>
#include <string>
using namespace std;

int main() {
    int quantity,number;float totalbill=0,itemtotal,discount, price;
    string name;
    cout<<"Enter number of items:";
    cin>>number;
    int i=1;
    while(i<=number){
        cout<<"Item "<<i<<" name:";
        cin>>name;
        cout<<"Item "<<i<<" price:";
        cin>>price;
        cout<<"Item "<<i<<" quantity";
        cin>>quantity;
    
    itemtotal=quantity*price;
    totalbill += itemtotal;
    i++;
    }
discount=0;
  if(totalbill>10000){
        discount=totalbill*0.20;
    }
    else if(totalbill>5000){
        discount=totalbill*0.10;
    }
    else{
        discount=0;
    }
    cout<<"Total Bill:"<<totalbill<<endl;
    cout<<"Discount:"<<discount<<endl;
    cout<<"Final Bill:"<<totalbill-discount<<endl;
    return 0;
}