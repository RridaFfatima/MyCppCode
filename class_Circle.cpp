#include<iostream>
#include<string>
using namespace std;
class Circle{
    private:
    double radius;
    const double pi=3.14159;
    public:
     Circle(){
        radius=0.0;

     }
     Circle (double i){
        radius=i;
    
     }
     void setradius(double i){
        radius=i;
     }
     double getradius()const{
        return radius;
     }
     double getArea()const{
        double area;
        area=pi*radius*radius;
        return area;
     }
     double getDiameter()const{
        double diameter;
        diameter = radius * 2;
        return diameter;
     }
     double getCircumference()const{
        double circumference;
        circumference=2 * pi * radius;
        return circumference;
     }
     

};
int main(){
    double radius;
    cout<<"enter circles radius: "<<endl;
    cin>>radius;
        Circle c(0);
        c.setradius(radius);
        cout<<"area: "<<c.getArea();
        cout<<endl;
        cout<<"diameter: " <<c.getDiameter();
        cout<<endl;
        cout<<"circumference: "<<c.getCircumference();

    
return 0;
}