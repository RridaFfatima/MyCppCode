#include<iostream>
#include<string>
using namespace std;
int harshad(int n){
    int t=n;// we use t to keep n safe otherwise after the loop weel be checking 0% sum==0 
    int sum=0;
    while(t>0){
     
    sum+=t%10;
    t=t/10;
}
    return ( sum !=0 && n%sum==0);// original no.divides by its sum like if n=23 and sum becomes 5 then 23%5
}
int main(){
    int c=0;
    int num=1;
    cout<<"first 500 harshad numbers are:"<<endl;
    while(c<500){
        if(harshad(num)){
            cout<<num<<" ";
            c++;
        }

        num++;
    }
    return 0;
}