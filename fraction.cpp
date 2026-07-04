#include <iostream>
#include "fraction.h"
using namespace std;

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