#include <iostream>
#include<string>
#include<cstring>
const int NAME_SIZE=40;
using namespace std;
class Student{
 private:
int  RollNumber; 
char  Name[40];
int  NumberofQuizzes; 
int * Marks; 
int TotalMarks; 

void inputMarks(int n){
    for(int i=0; i<n; i++){
        cout<<" enter marks of quiz "<< i+1<<" : ";
        int marks;
        cin>>marks;
        if(marks >=0 && marks<=TotalMarks){
            Marks[i]=marks;
        }
        else{
            cout<<"incorrect marks."<<endl;
        }

    }

}
public:

Student(){
    RollNumber=0;
    Name[0]='\0';
    NumberofQuizzes=0;
    TotalMarks=10;
    Marks = nullptr;
}

Student(int roll, char name[], int noofquiz, int totalmarks){
    RollNumber=roll;
    strcpy(Name,name);
    NumberofQuizzes=noofquiz;
    TotalMarks=totalmarks;
    Marks = new int[NumberofQuizzes] ();

}
~Student(){
    delete [] Marks;
}
void getInputFromUser(){

    cout<<"entr roll number: "<<endl;
    cin>>RollNumber;
     cout<<"enter name: "<<endl;
    cin>>Name;
    cout<<"enter no of quizes :"<<endl;
    cin>>NumberofQuizzes;
    cout<<"enter total marks of each quiz :"<<endl;
    cin>>TotalMarks;
    if(Marks != nullptr){
            delete [] Marks;
    }
        Marks = new int[NumberofQuizzes] ;
   inputMarks(NumberofQuizzes);

}
void display(){
    cout<< "DATA: "<<endl;
    cout<<" Roll number: "<<RollNumber<<endl;
    cout<<" Name: "<<Name<<endl;
    int sum=0;
    for(int i=0 ; i<NumberofQuizzes; i++){
        cout<<" marks of quiz "<< i+1<<": " <<Marks[i]<<endl;
        sum+=Marks[i];
    }
    double average =sum/NumberofQuizzes;
    cout<<"average marks are: "<<average<<endl;
}
Student(const Student & ref){
    RollNumber=ref.RollNumber;
    strcpy(Name, ref.Name);
    NumberofQuizzes=ref.NumberofQuizzes;
    TotalMarks=ref.TotalMarks;
    Marks=new int [NumberofQuizzes];
    for(int i=0; i<NumberofQuizzes; i++){
        Marks[i]= ref.Marks[i];
    }

}

};
void printStudent (Student S){
    S.display();

}
int main(){
    Student s1;
    s1.getInputFromUser();
    cout<<endl;

    s1.display();
    cout <<endl;
    Student s2=s1;
    cout<<" data od student 2"<<endl;
    
    printStudent(s2);

   
    return 0;


}