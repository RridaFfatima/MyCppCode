/*If there are 35 heads and 94 legs among the chickens and rabbits on a farm. How many rabbits
and how many chickens do we have? Hint: A loop may be used to iterate all possible solutions.*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    for(int r=0; r<35; r++){
        for(int c=0; c<53; c++){
            if(r+c==35 && r*4+ c*2==94){
            cout<<"no. of chickens: "<<c<<endl;
        
                    cout<<"no. of rabbits: "<<r<<endl;

    }
}
    }
    
    return 0;

}