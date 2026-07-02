//Write and demonstrate a function that outputs all the prime factors of an integer.//
#include<iostream>
#include<string>
using namespace std;
bool isPrime(int k)
{
   if( k<1)
   {
    return(false);
   }

for(int n=2;n<= k-1; n++ ) 
{ 
    if(k%n==0)
    return(false);
}
return(true);
}
void divisor(int n){
int i=2;
    
    while(i<=n){
        if((n%i==0)&&(isPrime(i))){
        cout<< i <<endl;
    
    }
    i++;
    }

}
int main(){
    int n;
    cout<<"Enter an integer: ";
cin>>n;
 divisor(n);
return 0;
}