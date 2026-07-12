#include<iostream>
#include<string>
#include<cstring> 
using namespace  std;
class SaleItem{
int ID;
char name[41];
int quantity;
double price;
public:
void setID(int i){
        ID=i;
}
void setname(char j[]){
    // for(int i=0; i<41; i++){
    strcpy(name,j);
//}
    }
 void setQuantity(int k){
        quantity=k;

    }
 void setprice(double d){
        price=d;
    }

int getID()const{
        return ID;
    }
const char* getName()const{
       // for(int i=0; i<41; i++){
       // cout<< name[i];
   // }
    return name;
}

int getquantity()const{
    return quantity;

}
double getprice()const{
    return price;
}
void incrementQuantity(int value){

    quantity=quantity+value;

}
void decrementQuantity(int value){
    if(value<=quantity){
    quantity=quantity-value;
    }
    else
    {
        cout<<"not enough in stock!"<<endl;
    }

}
void displayInformation(){
   /* cout<<" Item information: "<<endl;
    cout<<"Item Id: "<<ID<<endl;
    cout<<"Item name: "<<name<<endl;
    cout<<"Item quantity: "<<quantity<<endl;
    cout<<"Item price: "<<price<<endl;
    */
   cout<<ID<<"\t"<<name<<"\t"<<price<<"\t"<<quantity<<"\n";
    return ;
}

};
int main(){
    SaleItem s;
    s.setID(20);
    s.setname("mat");
    s.setprice(200.00);
    s.setQuantity(10);
    s.displayInformation();

cout<<endl;
    s.incrementQuantity(5);
    cout<<"after increment:  "<<s.getquantity();

cout<<endl;
    s.decrementQuantity(6);
    cout<<"after decrement: "<<s.getquantity();
    cout<<endl<<endl<<endl;





int q;
    cout<<"how many salseitem u want to create: ";
    cin>>q;
    SaleItem *arr =new SaleItem[q];
    for (int i=0; i<q; i++){
        cout<<"enter values as id,name, price and quantity."<<endl;
        cout<<"Eter details of saleitem # "<<i+1<<" : ";
        int id, quantity;
        double price;
        char name[41];
        cin>>id>>name>>price>>quantity;
        arr[i].setID(id);
        arr[i].setname(name);
        arr[i].setprice(price);
        arr[i].setQuantity(quantity);
    }


    while(true){
        cout<<"Menu: "<<endl;
        for(int i=0; i<q; i++){
            arr[i].displayInformation();
        }


        int id,quantity;
        cout<<"Enter the id of the itemu want to buy: (-1 to exit): ";
        cin>>id;
        if(id==-1){
            cout<<"bye bye!"<<endl;
            break;
        }
        cout<<"enter the quantity you want to buy: ";
        cin>>quantity;
        bool found =false;

        cout<< "your bill is as follow :"<<endl;
        cout<<"ID "<<"\t"<<"Name"<<"\t"<<"Unit price"<<"\t"<<"Quantity"<<"\t";
        cout<<endl;
        for(int i=0; i<q; i++){
            if(arr[i].getID()==id){
                found = true;
                if(quantity>arr[i].getquantity()){
                    cout<<"not enough stock"<<endl;
                }
                else{

                
                arr[i].setQuantity(quantity);

                arr[i].displayInformation();
            

            cout<<"total amount: "<<arr[i].getprice()*quantity;
            cout<<endl;

        
        arr[i].decrementQuantity(quantity);
                }
            }
        }
        if(!found){
            cout<<"item not found"<<endl;
        }

        cout<<"press enter key to return to menu:";
        cin.ignore();
        cin.get();
    }
        delete [] arr;


    
    return 0;

}