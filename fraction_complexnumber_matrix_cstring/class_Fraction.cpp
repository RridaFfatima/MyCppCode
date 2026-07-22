#include<iostream>
#include<string>
#include<cmath>
using namespace std;
class Fraction
{
private:
int numerator;
int denominator;

public:
Fraction(int = 1, int = 1);
Fraction operator+(const Fraction &);
Fraction operator*(const Fraction &);
Fraction operator/(const Fraction &);
Fraction operator-(const Fraction &);
void operator+=(const Fraction &);
void operator*=(const Fraction &);
void operator/=(const Fraction &);
void operator-=(const Fraction &);
bool operator==(const Fraction &);
bool operator!=(const Fraction &);
bool operator<=(const Fraction &);
bool operator>=(const Fraction &);
bool operator<(const Fraction &);
bool operator>(const Fraction &);
Fraction operator++();
Fraction operator++(int);
Fraction operator--();
Fraction operator--(int);
Fraction operator-();
operator double();
Fraction reduce();
void display();
};
void Fraction:: display(){
    cout<<numerator<<"/"<<denominator<<endl;
}

 Fraction :: Fraction(int numerator, int  denominator){
    this->numerator=numerator;
    this->denominator=denominator;
}
Fraction  Fraction :: operator+(const Fraction & ref){
    Fraction a;
    a.numerator=(this->numerator* ref.denominator)+(ref.numerator*this->denominator);
    a.denominator=this->denominator*ref.denominator;
    a=a.reduce();
    return a;
}
Fraction  Fraction :: operator-(const Fraction & ref){
    Fraction a;
    a.numerator=(this->numerator* ref.denominator)-(ref.numerator*this->denominator);
    a.denominator=this->denominator*ref.denominator;
     a=a.reduce();

    return a;
}
Fraction  Fraction :: operator*(const Fraction & ref){
    Fraction m;
    m.numerator=this->numerator*ref.numerator;
    m.denominator=this->denominator*ref.denominator;
     m=m.reduce();

    return m;
}
Fraction  Fraction :: operator/(const Fraction & ref){
    Fraction d;
    if(ref.denominator==0){
        cout<<"denominator cant be zero"<<endl;
        return Fraction();
    }
    d.numerator=this->numerator*ref.denominator;
    d.denominator=this->denominator*ref.numerator;
    d=d.reduce();

    return d;
}
void Fraction :: operator+=(const Fraction & ref){
    this->numerator=(this->numerator* ref.denominator)+(ref.numerator*this->denominator);
    this->denominator=this->denominator*ref.denominator;
    this->reduce();
}
void Fraction :: operator-=(const Fraction & ref){

    this->numerator=(this->numerator* ref.denominator)-(ref.numerator*this->denominator);
    this->denominator=this->denominator*ref.denominator;
    this->reduce();

}
void Fraction :: operator*=(const Fraction & ref){
    
    this->numerator=this->numerator*ref.numerator;
    this->denominator=this->denominator*ref.denominator;
    this->reduce();

}
void Fraction :: operator/=(const Fraction & ref){
    if(ref.denominator==0){
        cout<<"denominator cant be zero"<<endl;
        return ;
    }
    this->numerator=this->numerator*ref.denominator;
    this->denominator=this->denominator*ref.numerator;
    this->reduce();

}
bool  Fraction :: operator==(const Fraction & ref){
    if(this->numerator*ref.denominator != this->denominator*ref.numerator){
        return false;
    }
    return true;
}
bool  Fraction :: operator!=(const Fraction & ref){
    if(this->numerator*ref.denominator == this->denominator*ref.numerator){
        return false;
    }
    return true;
}
bool  Fraction :: operator<=(const Fraction & ref){
    return this->numerator*ref.denominator <= this->denominator*ref.numerator;
    }
bool  Fraction :: operator>=(const Fraction & ref){
       return this->numerator*ref.denominator >= this->denominator*ref.numerator;

    }
bool  Fraction :: operator<(const Fraction & ref){
    return this->numerator*ref.denominator < this->denominator*ref.numerator;
    }
bool  Fraction :: operator>(const Fraction & ref){
       return this->numerator*ref.denominator > this->denominator*ref.numerator;

    }
Fraction Fraction :: operator++(){
    this->numerator=this->numerator+(this->denominator*1);
    this->reduce();

    return *this;
}
Fraction Fraction :: operator--(){
    this->numerator=this->numerator-(this->denominator*1);
    this->reduce();

    return *this;
}
Fraction Fraction :: operator++(int){
    Fraction temp=*this;
    this->numerator=this->numerator+(this->denominator*1);
    this->reduce();

    return temp;
}
Fraction Fraction :: operator--(int){
    Fraction temp=*this;
    this->numerator=this->numerator-(this->denominator*1);
    this->reduce();

    return temp;
}

Fraction :: operator double(){
    return double(this->numerator)/this->denominator;
}

Fraction Fraction ::  operator-(){
    
    return Fraction(-numerator,denominator);
}
   


Fraction Fraction ::  reduce(){
    if(denominator==0){
        cout<<"denominator can't be zero"<<endl;
        return Fraction();
    }
 if(this->denominator<0){
        this->denominator=abs(denominator);
        this->numerator=-numerator;
    }

    int a=abs(this->numerator);
    int b=abs(this->denominator);
    int r;
    int gcd;
    while(b!=0){
        r=a%b;
        a=b;
        b=r;
        gcd=a;
        
    }
    this->numerator = (this->numerator)/gcd;
    this->denominator=(this-> denominator)/gcd;
    
   
return *this;

}

int main(){
    Fraction f1(2,3);
    Fraction f2(1,5);
    Fraction f3=f1+f2;
    cout<<"addition of f1+f2, f3 becomes: "<<endl;
    f3.display();
    cout<<endl;

    Fraction f4=f1-f2;
    cout<<"subtraction of f1-f2, f4 becomes: "<<endl;
    f4.display();
    cout<<endl;

    Fraction f5=f1*f2;
    cout<<"multiplication of f1*f2, f5 becomes: "<<endl;
    f5.display();
    cout<<endl;

    Fraction f6=f1/f2;
    cout<<"division of f1/f2, f6 becomes: "<<endl;
    f6.display();
    cout<<endl;
    Fraction f7(3,4);
    Fraction f8(2,5);
    f7+=f8;
    cout<<"f7+=f8 , f7 becomes: "<<endl;
    f7.display();
    cout<<endl;

    f7-=f8;
    cout<<"f7-=f8 , f7 becomes: "<<endl;
    f7.display();
    cout<<endl;
    f7*=f8;
    cout<<"f7*=f8 , f7 becomes: "<<endl;
    f7.display();
    cout<<endl;
    f7/=f8;
    cout<<"f7/=f8 , f7 becomes: "<<endl;
    f7.display();
    cout<<endl;

    if(f1==f2){
        cout<<"YES, f1=f2"<<endl;
    }
    else{
        cout<<"NO, f1!=f2"<<endl;
    }
    cout<<endl;

    if(f1!=f2){
        cout<<"YES, f1!=f2"<<endl;
    }
    else{
        cout<<"NO, f1==f2"<<endl;
    }
    cout<<endl;
    
    if(f1<=f2){
        cout<<"YES, f1<=f2"<<endl;
    }
    else{
        cout<<"NO, f1 is not <= f2"<<endl;
    }
    cout<<endl;

     if(f1>=f2){
        cout<<"YES, f1>=f2"<<endl;
    }
    else{
        cout<<"NO, f1 is not >= f2"<<endl;
    }
    cout<<endl;

    if(f1<f2){
        cout<<"YES, f1<f2"<<endl;
    }
    else{
        cout<<"NO, f1 is not less than f2"<<endl;
    }
    cout<<endl;

     if(f1>f2){
        cout<<"YES, f1>f2"<<endl;
    }
    else{
        cout<<"NO, f1 is not greater than f2"<<endl;
    }
    cout<<endl;

    cout<<"(--f1): ";
    (--f1).display();
    cout<<endl;
    cout<<endl;

    cout<<"(++f1): ";
    (++f1).display();
    cout<<endl; 
    cout<<endl; 

    cout<<"(f2--): ";
    (f2--).display();
    cout<<endl;
    cout<<endl; 

    cout<<"(f2++): ";
    (f2++).display();
    cout<<endl;
    cout<<endl; 

    double d =f1;
    cout<<" f1 as. double is:" <<d<<endl;
    cout<<endl;

    cout<<"  f10 is: ";
    Fraction f10(-6,7);
    f10.display();
    cout<<endl;
    cout<<"negative of f10 is: "<<endl;
    (-f10).display();
    cout<<endl;
    cout<<endl;
    
    Fraction f9(2,-5);
    cout<<"f9is: "<<endl;
    f9.display();
    f9.reduce();
    cout<<"after reducign to make denominator positive: "<<endl;
    f9.display();





    return 0;
}


