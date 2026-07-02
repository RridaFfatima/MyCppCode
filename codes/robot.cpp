/*A robot moves in a plane starting from the original point (0,0). The robot can move toward UP,
DOWN, LEFT and RIGHT with a given steps. So, you can provide instructions, as example, to
robot as follows: U 2 L 3 U 2 R 2 U 6 D 10 L 3 to move 2 steps up, then 3 steps left, then 2 steps
up, then 2 steps right, then 6 steps up, then 10 steps down, then lastly 3 steps left. These steps
may be input in several line as per programmers convince.
You have to write a program to compute the distance from current position after a
sequence of movement and original point.*/
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    char directions;
    int steps;
        int x=0,y=0;

bool dir=true;
while( dir==true)     
  {
     cout<<"direction for robot to move in (U,D,L,R) and (enter E to stop): ";
    cin>>directions;
   
    if(directions == 'E'){
        dir=false;

    }
    else{
    cout<<" the number of steps ";
 cin>>steps;
    }
    if(directions=='U'){
        y=y+steps;
    }
        else if(directions=='D'){
        y=y-steps;
    }
   else if(directions=='L'){
    x=x-steps;
}
    else if(directions=='R'){
    x=x+steps;
    }
}
    float distance=0.0;
    distance=sqrt((x*x)+(y*y));
    cout<<"the distance is: "<<distance<<endl;

    return 0;
}
