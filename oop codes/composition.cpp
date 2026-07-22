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
Fraction operator*( const Fraction &);
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



#include<iostream>
#include<string>
using namespace std;
class ComplexNumber
{
private:
Fraction real;
Fraction imaginary;

public:
ComplexNumber(Fraction= 0.0, Fraction = 0.0);
void display();
ComplexNumber operator+(const ComplexNumber & ref);
ComplexNumber operator-(const ComplexNumber & ref);
ComplexNumber operator*(const ComplexNumber & ref);
ComplexNumber operator/( ComplexNumber & ref);
};
 ComplexNumber :: ComplexNumber(Fraction real, Fraction imaginary): real(real), imaginary(imaginary){}
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
     Fraction real= (this->real*ref.real)-(this->imaginary*ref.imaginary);
    Fraction imaginary=(this->imaginary*ref.real)+(this->real*ref.imaginary);
    return ComplexNumber(real,imaginary);
}
ComplexNumber ComplexNumber :: operator/( ComplexNumber & ref){
    Fraction denom=(ref.real * ref.real)+(ref.imaginary*ref.imaginary);
    Fraction real= ((this->real*ref.real)+(this->imaginary*(ref.imaginary)))/denom;
    Fraction imaginary=((this->imaginary*ref.real)-(this->real*(ref.imaginary)))/denom;
    return ComplexNumber(real,imaginary);

}
int main(){
    Fraction c1(2,3);
    Fraction c2(3,4);
    cout<<" c1 is: "<<endl;
    c1.display();
    cout<<endl;
    cout<<" c2 is: "<<endl;
    c2.display();
    cout<<endl;
    Fraction c3=c1+c2;
    cout<<"after addition of c1+c2 ,c3 is: "<<endl;
    c3.display();
    cout<<endl;
    Fraction c4=c3-c2;
    cout<<"after subtraction of c3-c2 ,c4 is: "<<endl;
    c4.display();
    cout<<endl;
    Fraction c5=c1*c2;
    cout<<"after multiplication of c1*c2, c5 is: "<<endl;
    c5.display();
    cout<<endl;
    Fraction c8=c1/c2;
    cout<<"after division of c1/c2, c8 is: "<<endl;
    c8.display();
    cout<<endl;
    

    return 0;
}