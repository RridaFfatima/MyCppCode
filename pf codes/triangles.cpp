/*Write a C++ program that determines the type of a triangle based on the lengths of its three sides.
The program should prompt the user to enter three integer values representing the side lengths.
Based on these inputs, it should classify and output the type of triangle as one of the following:
• Equilateral Triangle: All three sides are equal.
• Isosceles Triangle: Exactly two sides are equal.
• Scalene Triangle: All three sides are different.
• Invalid Triangle: The sum of the lengths of any two sides must be greater than the length of
the third side. If this condition is not met, the input does not form a valid triangle.
Additionally, determine if possible, whether the triangle is right triangle using Pythagoras
can i do this without function*/
#include<iostream>
#include<string>
using namespace std;
 int main(){
int a,b,c;
cout<<"Enter three sides of a triangle: "<<endl;
cin>>a>>b>>c;
if(a+b>c || b+c>a || c+a>b){
    if(a==b && b==c){
    cout<<"Equilateral triangle"<<endl;
    }
    else if(a==b || b==c || c==a)
    {
        cout<<"Isoceles triangle"<<endl;

    }
    else{
        cout<<"Scalene traingle"<<endl;
    }
    if(a*a +b*b == c*c || c*c +b*b == a*a || a*a +c*c == b*b)
    {
        cout<<"It's a right angled triangle. "<<endl;
    }
    else{
        cout<<"It's not a right angled trinagle."<<endl;
    }
}
else{
    cout<<"Invalid triangle"<<endl;
 }


return 0;
}
