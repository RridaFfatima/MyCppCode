#include<iostream>
#include<string>
using namespace std;
class Algebra{
    private:
    int a,b;
    public:
    void setA(int i){
        a=i;
    }
     void setB(int i){
        b=i;
    }
    Algebra(){
        a=0;
        b=0;
    }
    Algebra(int i){
        a=b=i;
    }
    //Algebra(int i, int j){
     //   a=i;
     //   b=j;
    //}
    Algebra(int i, int j):a(i),b(j){
        cout<<"parameterized constructor"<<endl;
    }
    int getA(){
        return a;
    }
    int getB(){
        return b;
    }
    int getproduct(){
        return a*b;
    }
    Algebra (const Algebra &ref){
        a=ref.a;
        b=ref.b;

    }

    

};
int main(){
    Algebra o1(2,4);
    Algebra o2=o1;
    cout<<"a is: "<<o1.getA()<<endl;
    cout<<"b is: "<<o1.getB()<<endl;
    cout<<"product is: "<<o1.getproduct()<<endl;
    cout<<"a is: "<<o2.getA()<<endl;
    cout<<"b is: "<<o2.getB()<<endl;
    cout<<"product is: "<<o2.getproduct()<<endl;
    return 0;

    

}