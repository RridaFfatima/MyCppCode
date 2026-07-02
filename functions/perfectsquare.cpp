/*If square root of an integer F is an integer, F is called a perfect square. Write a function and
demonstrate it which tests whether an integer is a perfect square or not.*/
#include<iostream>
#include<string>
using namespace std;
void sq(int F)
{
for(int i=1;i<F;i++){
    if(i*i==F){
        cout<<F<<" is a perfect square."<<endl;
        return ;
    }
    
}

    
        cout<<F<<"  is not a perfect square."<<endl;

}

int main(){
    int F;
    cout<<"Enter an integer: ";
    cin>>F;
    sq(F);
    return 0;
}