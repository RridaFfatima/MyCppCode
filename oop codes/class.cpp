#include<iostream>
#include<string>
using namespace std;
class Rectangle{
    private:
    int width;
    int height;
    public:
    void  setwidth(int w){
        width=w;
    }
    void  setheight(int h){
        height=h;
    }
    int getArea(){
        return height* width;
    }
    int getheight(){
        return height;
    }
    int getwidth(){
        return  width;
    }
    

    

};
int main(){
    Rectangle r;
    r.setwidth(5);
    r.setheight(6);
    cout<<"Area: "<<r.getArea()<<endl;
    cout<<"height: "<<r.getheight()<<endl;
    cout<<"width: "<<r.getwidth()<<endl;

    return 0;

}