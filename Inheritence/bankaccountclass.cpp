#include<iostream>
#include<string>
using namespace std;
class BankAccount{
private:
char Title[25];
int AccountNumber;
double  Balance;
public:
BankAccount(const char* title="", int accnumber=0, double balance=0.0){
    strcpy(this->Title,title);
    AccountNumber=accnumber;
    Balance=balance;
}
 void Deposit(double x){
    Balance+=x;
 }
  void Withdraw(double x){
    if(Balance<x){
        cout<<"insufficient"<<endl;
            return;
    }
    Balance=Balance-x;
  }
  double getbalance()const{
    return Balance;
  }
  void setBalance(double x){
    Balance=x;
  }
  void display(){
    cout<<"title: "<<Title<<endl;
    cout<<"acc number: "<<AccountNumber<<endl;
    cout<<"balance: "<<Balance<<endl;
  }

};
class SavingAccount: virtual public BankAccount{
    private:
    int InterestRate;
    public:
    SavingAccount(const char* title="", int accnumber=0, double balance=0.0, int rate=0):BankAccount(title,accnumber,balance){
        InterestRate=rate;
    }
    double CalculateInterest(){
        double value=0.0;
        value=getbalance()*(InterestRate/100.0);
        return value;

    }
    void displayy(){
        display();
        cout<<"interest rate: "<<InterestRate<<endl;
        cout<<"interest ammount: "<<CalculateInterest()<<endl;
         cout<<"after interest: "<<getbalance()-CalculateInterest()<<endl;
    }

};
class CheckingAccount: virtual public BankAccount{
    private:
    double feechargedpertrasaction;
    public:
    CheckingAccount(const char* title="", int accnumber=0, double balance=0.0,double fee=0.0):BankAccount(title,accnumber,balance){
        feechargedpertrasaction=fee;
    }
    void Deposit(double x){
    getbalance()+x;
 }
  void Withdraw(double x){
     if(getbalance()<x+feechargedpertrasaction){
        cout<<"insufficient"<<endl;
            return;
    }
    double oldbalnce=getbalance();
    int result =getbalance()-(x+feechargedpertrasaction);
    setBalance(result);
    cout<<"balnce: "<<oldbalnce<<endl;
    cout<<"balance after fee and withdrawal: "<<getbalance()<<endl;
    return ;
  }
void displayyy(){
    display();
    cout<<"fee charged: "<<feechargedpertrasaction<<endl;
}
};
int main(){
    SavingAccount s("abc",245,670,15);
    s.displayy();

    cout<<endl;
    s.setBalance(500);
    s.Deposit(200);
    s.Withdraw(300);
    s.displayy();
     cout<<endl;

    CheckingAccount c("abc",245,1000,10);
    c.Withdraw(100);
    c.Withdraw(100);
    c.displayyy();



    return 0;
}