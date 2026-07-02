/*Write a function that outputs all the divisors of an integer. Divisor of an integer N is another
integer between range 1 and N, which divides it completely, i.e., remainder is 0. Later, call
the function in main to demonstrate its working. Run the program several times for different
integers and prepare a table with integer in first column and its divisors in second column.*/
#include<iostream>
#include<string>
using namespace std;
void divisor(int n)
{
    int i=1;
    while(i<=n){
        if(n%i==0){
        cout<<i<<endl;
        
    }
    i++;
    }
}
int main()
{ int n;
    cout<<"Enter an integer n: ";
    cin>>n;
    divisor(n);
    return 0;
}