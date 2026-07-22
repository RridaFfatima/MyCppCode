#include<iostream>
#include<string>
#include<cstring>
using namespace std;
struct Item
{
char name[50];
int quantity;
float unitPrice;
};
struct Cart
{
Item * data;
int noOfItems;
int capacity;

};
Cart c;
void initializeCart( Cart & c, int capacity){
    c.capacity=capacity;
    c.noOfItems=0;
    c.data=new Item[capacity];

}
 bool addItem( Cart & c, const Item & it){
    if(c.noOfItems==c.capacity){
        return false;
    }
    else{
        c.data[c.noOfItems]=it;
        c.noOfItems++;
    }
            return true;


 }
 bool removeItem( Cart & c, char * itemName, int count = 1 ){
    int remove=0;
    for(int i=0; i<c.noOfItems && remove<count; i++){
        if(strcmp(c.data[i].name,itemName)==0){
            for(int j=i;j<c.noOfItems; j++){
                c.data[j]=c.data[j+1];
            }
            c.noOfItems--;
            i--;
            remove++;
        }


    }
    if(remove>0){
        return true;
    }
    else{
        return false;
    }

 }
 void checkOut( Cart & c){
    if(c.noOfItems==0){
        cout<<"no items in cart"<<endl;
    }
    int sum=0;
    for(int i=0; i<c.noOfItems; i++){
        cout<<"Item "<<i+1<<" : "<<endl;
         cout<<"name: " << c.data[i].name<<endl;
         cout<<"quantity: " <<c.data[i].quantity<<endl;
         cout<<"unit price: "<<c.data[i].unitPrice<<endl;
         cout<<"total: "<<c.data[i].quantity*c.data[i].unitPrice<<endl;
         sum+=c.data[i].quantity*c.data[i].unitPrice;
         cout<<"------------------------------";

        
    }
 cout<<endl;
         cout<<"total bill: "<<sum<<endl;

 }
 void resize(int s=5){
    int newcapacity=c.capacity+s;
    Item* newdata=new Item[newcapacity];
    for(int i=0; i<c.noOfItems;i++){
        newdata[i]=c.data[i];
    }
    delete  []c.data;
    c.data=newdata;
    c.capacity=newcapacity;
}
    



int main(){
    Cart I;
    I.noOfItems=2;
I.capacity=5;
initializeCart(I,3);
Item i1={"milk",1,100};
Item i2={"lemon",3,456};
Item i3={"bulb",4,200};


addItem(I,i1);
addItem(I,i2);
resize(5);
addItem(I,i3);

checkOut(I);
cout<<endl;
removeItem(I, (char*)"lemon");
cout<<endl;
cout<<"after removal:"<<endl;
cout<<endl;
checkOut(I);

delete []I.data;
return 0;
}