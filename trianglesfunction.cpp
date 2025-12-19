/*Write a C++ program that determines the type of a triangle based on the lengths of its three sides.
The program should prompt the user to enter three integer values representing the side lengths.
Based on these inputs, it should classify and output the type of triangle as one of the following:
• Equilateral Triangle: All three sides are equal.
• Isosceles Triangle: Exactly two sides are equal.
• Scalene Triangle: All three sides are different.
• Invalid Triangle: The sum of the lengths of any two sides must be greater than the length of
the third side. If this condition is not met, the input does not form a valid triangle.
Additionally, determine if possible, whether the triangle is right triangle using Pythagoras*/
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
bool valid(int a, int b, int c)
{
return (a+b>c && b+c>a && c+a>b);
}
string type(int a,int b,int c)
{

if(a==b && b==c){
    return "Equilateral Triangle";

}
else if(a==b ||b==c || c==a){
    return"isoceles Triangle";
}
else{
    return "scalene Triangle";
}
}
bool RHD(int a, int b,int c){
if(a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b){
    return "right angle Triangle";


}
}
int main(){
    int a,b,c;
    cout<<"Enter three values: "<<endl;
    cin>>a>>b>>c;
if(!(valid(a,b,c))){
    cout<<"no valid triangle."<<endl;
}
else{
cout<<valid(a,b,c)<<endl;
}

cout<<type(a,b,c)<<endl;
if(RHD(a,b,c)){
    cout<<"it's a right angle triangle."<<endl;
}
else{
    cout<<"not a right angle trianle."<<endl;
}
return 0;
}