#include <iostream>
#include <string>
using namespace std;

int main() {
    int months,fee; float discount;
    cout<<"Enter your membership months"<<endl;
    cin>>months;
    cout<<"Enter your monthly fee"<<endl;
    cin>>fee;
    discount=0;
    if(months>=12){
        discount=fee*(20.0/100);
    }
    if(months>=6){
        discount=fee*(10.0/100);
    }
    else{
    discount=0;
    }

cout<<"Total before discount:"<<fee;
cout<<endl;
cout<<"Discount:"<<discount<<endl;
cout<<"Final amount:"<<fee-discount<<endl;
return 0;
}