#include<iostream>
#include<string>
using namespace std;
class ComplexNumber
{
private:
double real;
double imaginary;

public:
ComplexNumber(double = 0.0, double = 0.0);
void display();
ComplexNumber operator+(const ComplexNumber & ref);
ComplexNumber operator-(const ComplexNumber & ref);
ComplexNumber operator*(const ComplexNumber & ref);
ComplexNumber operator/(const ComplexNumber & ref);
};
 ComplexNumber :: ComplexNumber(double real, double imaginary){
    this->real=real;
    this->imaginary=imaginary;
 }
 void ComplexNumber :: display(){
    cout<<real<<" + "<<imaginary<<" i"<<endl;
 }
ComplexNumber ComplexNumber ::  operator+(const ComplexNumber & ref){
    ComplexNumber s;
    s.real=(this->real+ref.real);
     s.imaginary=(this->imaginary+ ref.imaginary);
   return s;
}
ComplexNumber ComplexNumber ::  operator-(const ComplexNumber & ref){
    ComplexNumber S;
    S.real=(this->real-ref.real);
    S.imaginary=(this->imaginary- ref.imaginary);
    return S;
}
ComplexNumber  ComplexNumber ::operator*(const ComplexNumber & ref){
    ComplexNumber c;
   
    c.real= (this->real*ref.real)-(this->imaginary*ref.imaginary);
    c.imaginary=(this->imaginary*ref.real)+(this->real*ref.imaginary);
    return c;
}
ComplexNumber ComplexNumber :: operator/(const ComplexNumber & ref){
    ComplexNumber C;
    double denom=(ref.real*ref.real)+(ref.imaginary*ref.imaginary);
    C.real= ((this->real*ref.real)+(this->imaginary*(ref.imaginary)))/denom;
    C.imaginary=((this->imaginary*ref.real)-(this->real*(ref.imaginary)))/denom;
    return C;

}
int main(){
    ComplexNumber c1(2,3);
    ComplexNumber c2(3,4);
    cout<<" c1 is: "<<endl;
    c1.display();
    cout<<endl;
    cout<<" c2 is: "<<endl;
    c2.display();
    cout<<endl;
    ComplexNumber c3=c1+c2;
    cout<<"after addition of c1+c2 ,c3 is: "<<endl;
    c3.display();
    cout<<endl;
    ComplexNumber c4=c3-c2;
    cout<<"after subtraction of c3-c2 ,c4 is: "<<endl;
    c4.display();
    cout<<endl;
    ComplexNumber c5=c1*c2;
    cout<<"after multiplication of c1*c2, c5 is: "<<endl;
    c5.display();
    cout<<endl;
    ComplexNumber c8=c1/c2;
    cout<<"after division of c1/c2, c8 is: "<<endl;
    c8.display();
    cout<<endl;
    

    return 0;
}