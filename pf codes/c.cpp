#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    int n, r, c, l, f;
cout << "enter a number n: ";
cin >> n;
c = 2;
l = sqrt(n);
f = 0;
r = -1;
while( c<=l )
{
r = n % c;
if( r == 0 ){
    f = 1;
}
c++;

}
if(f == 1){
    cout << "not prime" << endl;
}
else{
    cout << "yes prime" << endl;
}
return 0;
}


