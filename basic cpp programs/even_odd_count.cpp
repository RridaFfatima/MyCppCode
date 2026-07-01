#include <iostream>
#include <string>
using namespace std;

int main() {
    int numbers,num,oc=0,ec=0;
    cout<<"How many numbers?";
    cin>>numbers;
    int i=1;
    while (i<=numbers)
    {cout<<"Enter no.:"<<i<<endl;
        cin>>num;
    
    if(num%2==0){
        ec++;
    }
    else{
        oc++;
    }
    i++;
}
    cout<<"even count"<<ec<<endl;
    cout<<"odd count"<<oc<<endl;
    return 0;
}