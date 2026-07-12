#include<iostream>
#include<string>
using namespace std;
class Date{
    private:
    int Day;
    int Month;
    int Year;
    public:
    void setDay(int i){
        Day=i;
}
    void setMonth(int j){
        Month=j;

    }
    void setYear(int k){
        Year=k;

    }
     int getDay()const{
        return Day;

    }
     int getMonth()const{
        return Month;

    }
     int getYear()const{
       return Year;

    }
    void displaydate(){
        cout<<"date:"<<endl;
        cout<<Day<<"/"<<Month<<"/"<<Year<<endl;
        return ;

    }


};
int main(){
    Date d;
    d.setDay(15);
    d.setMonth(03);
    d.setYear(2016);
    cout<<"day: "<<d.getDay()<<endl;
    cout<<"month: " <<d.getMonth()<<endl;

    d.displaydate();




    Date arr[5];
    arr[0].setDay(25);
    arr[0].setMonth(12);
    arr[0].setYear(1876);

    arr[1].setDay(9);
    arr[1].setMonth(11);
    arr[1].setYear(1877);

    arr[2].setDay(21);
    arr[2].setMonth(04);
    arr[2].setYear(1938);

    arr[3].setDay(14);
    arr[3].setMonth(8);
    arr[3].setYear(1947);

    arr[4].setDay(11);
    arr[4].setMonth(9);
    arr[4].setYear(1948);

    for(int i=0; i<5; i++){
        arr[i].displaydate();
        cout<<endl;
    }  


int size;
    cout<<"enter size of array: ";
    cin>>size;
    Date* ar=new Date[size];
    for(int i=0; i<size; i++){
        int d,m,y;
        cout<<"enter date in digits: ";
        cin>>d;
        ar[i].setDay(d);
        cout<<"enter Month in digits: ";
        cin>>m;
        ar[i].setMonth(m);
        cout<<"enter year in digits: ";
        cin>>y;
        ar[i].setYear(y);
        
    }
    for(int i=0; i<size; i++){
        ar[i].displaydate();
        cout<<endl;
    }  

    delete [] ar;

    return 0;

    
}