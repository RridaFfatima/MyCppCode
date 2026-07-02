#include<iostream>
#include<string>
#include<cmath>
using namespace std;
const unsigned short int maxpower = 21;
// too store polynomails where degree <= 20
struct Polynomial
{
    int degree;
     int coefficients[maxpower];
};

Polynomial createPolynomial(int degree)
{
    Polynomial r;
    r.degree=degree;
    for(int i=0; i<=degree; i++){
r.coefficients[i]=0;
    }
    return r;
}

void printPolynomial(const Polynomial &p)
{
    bool first_term=true;
for(int i=0; i<=p.degree; i++){
    if(p.coefficients[i]!=0){
                
        int power=p.degree-i;
        if(!first_term && p.coefficients[i]>0){
            cout<<"+";
        }
        if(power>1){
            cout<<p.coefficients[i];
            cout<<"x^"<<power<<" ";
        }
        else if(power==1){
             cout<<p.coefficients[i];

            cout<<"x"<<" ";
        }
        else{
            cout<<p.coefficients[i]<<" ";
        }
              first_term=false;
  
    }
}
if(first_term){
    cout<<"0";
}
    return;
}

Polynomial inputPolynomial(int degree)
{
    Polynomial t;
    t.degree=degree;
        for(int i=0; i<=degree; i++){
cin>>t.coefficients[i];
}
    return t;

}
void updatePolynomial(Polynomial &p)
{
for(int i=0; i<=p.degree; i++){
    cin>>p.coefficients[i];
}
    return ;

}
Polynomial addPolynomials(const Polynomial &p1, const Polynomial &p2)
{
int maxdegree;
if (p1.degree > p2.degree){
    maxdegree = p1.degree;
}
else{
    maxdegree = p2.degree;
}
int c1,c2;
    Polynomial t;

    t.degree=maxdegree;
    for(int i=0; i<=maxdegree; i++){
        if(i<=p1.degree){
         c1 = p1.coefficients[i];
        }
        else{
            c1=0;
        }
        if(i<=p2.degree){
         c2 = p2.coefficients[i];
        }
        else{
            c2=0;
        }

t.coefficients[i]=c1+c2;
    }
    return t;
}

unsigned int value(const Polynomial &m, int varValue)
{
    int power;
     int v,value;
      v=0;
      for( int i=0 ;  i<=m.degree; i++){
        power=m.degree-i;
       value=m.coefficients[i]*(pow(varValue,power));
            v+=value;

      }
    return v;
}

int main()
{
    cout << "Enter 3 coefficients for Polynomial of degree 2" << endl;
    Polynomial m1 = inputPolynomial(2);
    cout << "Your Polynomial is:" << endl;
    printPolynomial(m1);
    cout<<endl;
    cout << "Again enter 3 coefficients for same Polynomial of degree 2" << endl;
    updatePolynomial(m1);
    cout << "Your Polynomial is:" << endl;
    printPolynomial(m1);
    cout<<endl;

    int v = value(m1, 2);
    cout << "The polynomial for x = 2 is evaluated as:" << endl;
    cout << v << endl;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Enter 4 coefficients for a degree 3 polynomial" << endl;
    Polynomial a = inputPolynomial(3);
    cout << "Your Polynomial is:" << endl;
    printPolynomial(a);
    
    cout << "Now enter 3 coefficients for another degree 2 polynomial" << endl;
    Polynomial b = inputPolynomial(2);
    cout << "Your Polynomial is:" << endl;
    printPolynomial(b);
    cout<<endl;
    Polynomial c;  // after this line total garbage
    c = addPolynomials(a, b);
    cout << "Sum of above two polynomials is" << endl;
    printPolynomial(c);

	return 0;
}
