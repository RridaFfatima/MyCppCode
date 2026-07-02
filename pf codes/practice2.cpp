#include<iostream>
#include<string>
#include<array>
using namespace std;
struct Book{
    string title ;
     string author;
     double price;
};
enum Day{
    sunday,
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday,
};
int main(){
    Book a ={"The Grudge","Takashi",500.0};
    cout<< "title: "<<a.title<<endl;
    cout<< "author: "<<a.author<<endl;
    cout<<"price: "<<a.price;
    cout<<endl;
    Day today=saturday; 


if(today==saturday || today==sunday){
    cout<<"it's weekend.";
}
else{
    cout<<"it's not a weekend.";
}
cout<<endl;
array<int ,5>scores= {85, 90, 78, 92, 88};
int average=0;
int sum=0;
for(int score:scores){

sum += score;
}
 average =sum/5;
cout<<average;
    return 0;
}