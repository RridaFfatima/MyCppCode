#include<iostream>
#include<string>
#include<cstring>
using namespace std;
struct Book
{
char name[50];
char publisher[50];
int ISBNNumber;
};
struct Library
{
Book * data;
int noOfBooks;
int capacity;
};
void initializeLibrary( Library & ly, const int capacity){
ly.capacity=capacity;
ly.noOfBooks=0;
ly.data=new Book[capacity];
}
 bool addBook( Library & ly, const Book & bo){
    if(ly.noOfBooks==ly.capacity){
        return false;
    }
    else{
        ly.data[ly.noOfBooks]=bo;
        ly.noOfBooks++;
    }
    return true;

 }
 bool removeBook (Library& ly, char * BookName, int count = 1 ){
    int remove=0;
    for(int i=0; i<ly.noOfBooks && remove < count ; i++){
    if(strcmp(ly.data[i].name,BookName)==0){
        for(int j=i; j<ly.noOfBooks-1; j++){
            ly.data[j]=ly.data[j+1];
        }
        ly.noOfBooks--;
        remove++;
        i--;

    }
    }
    if(remove>0){
        return true;
    }
    else{
        return false;
    }


 }
 void DisplayAllBooksInformation( Library & ly){
    if(ly.noOfBooks==0){
        cout<<"no books found."<<endl;
        return;
    }
    for(int i=0; i<ly.noOfBooks; i++){
        cout<<"Data of book "<<i+1<<" : "<<endl;
        cout<<"name: " << ly.data[i].name<<endl;
         cout<<"publisher: " <<ly.data[i].publisher<<endl;
         cout<<"ISBNNumber: "<<ly.data[i].ISBNNumber<<endl;
         cout<<"--------------------------------------";
         cout<<endl;


    }


 }
 void resize(Library& ly , int s=5){
    int newcapacity=ly.capacity+s;
    Book* newdata=new Book[newcapacity];
    for(int i=0; i<ly.noOfBooks; i++){
        newdata[i]=ly.data[i];
    }
    delete []ly.data;
    ly.data=newdata;
    ly.capacity=newcapacity;

 }

int main(){
Library x;
x.noOfBooks=2;
x.capacity=5;
initializeLibrary(x,2);
Book b1={"abc","def",123};
Book b2={"xyz","pqr",456};
Book b3={"lmn","str",987};


addBook(x,b1);
addBook(x,b2);
resize(x,5);
addBook(x,b3);

DisplayAllBooksInformation(x);
cout<<endl;
removeBook(x, (char*)"lmn");
cout<<endl;
cout<<"after removal:"<<endl;
cout<<endl;
DisplayAllBooksInformation(x);
delete []x.data;
return 0;

}