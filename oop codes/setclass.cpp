#include<iostream>
#include<string>
using namespace std;
class Set{
    private:
    int capacity;
    int noofelements;
    int * data;
    public:
    Set(int n){
        capacity=n;
        noofelements=0;
        data=new int[capacity];
    }
    ~Set(){
        delete[] data;
        data=nullptr;
    }
    Set(const Set &ref){
        capacity=ref.capacity;
        noofelements=ref.noofelements;
        data=new int[capacity];
        for(int i=0; i<noofelements; i++){
            data[i]=ref.data[i];

        }

    }
     bool contain(int n){
        for(int i=0; i<noofelements; i++){
            if(data[i]==n){
                return true;
            }
        }
        
            return false;
        

        
    }
    void insert(int n){
        if(noofelements==capacity){
            cout<<"no capacity!!!!!"<<endl;
            return;
               
        }
        if(!contain(n)){
            data[noofelements]=n;
            noofelements++;
        }
    }
    void remove(int n){
        for(int i=0; i<noofelements; i++){
            if(data[i]==n){
            for(int j=i; j<noofelements-1; j++){
                
                    data[j]=data[j+1];
            }
                    noofelements--;
                    return;
                }
            }
        }
        
    void display(){
        cout<<"{ ";
        for(int i=0; i<noofelements; i++){
            cout<<data[i]<<" ,";

        }
        cout<<" }" <<endl;
    }
   
    Set setunion(Set s){
        Set result(capacity+ s.capacity);
        for(int i=0; i<noofelements; i++){
            result.insert(data[i]);
        }
        for(int j =0; j<s.noofelements; j++){
            result.insert(s.data[j]);
        }
        return result;
    }
    Set intersection(Set s){
        Set result(capacity);
        for(int i=0; i<noofelements; i++){
            if(s.contain(data[i]))
            result.insert(data[i]);
        }
        
        return result;

    }
    Set Difference(Set s){
        Set result(capacity);
        
        for(int i=0; i<s.noofelements; i++){
            if(!s.contain(data[i])){
                result.insert(s.data[i]);
            }
        }
        return result;
    }
    Set symmetricdifference(Set s){
        Set result(capacity+s.capacity);
        for(int i=0 ; i<noofelements; i++){
            if(!contain(s.data[i])){
                result.insert(data[i]);
            }
        }
        for(int i=0 ; i<s.noofelements; i++){
            if(!s.contain(data[i])){
                result.insert(s.data[i]);
            }
        }
        return result;
    }

    void cartesian_product(Set s){
        for(int i=0;i<noofelements; i++){
            for(int j=0; j<s.noofelements; j++){
                cout<<" ( "<<data[i]<<" , "<<s.data[j]<<" ) "<<endl;
            }
        }
    }

};
void f(Set s){
    s.insert(2);
}
int main(){
    Set s1(10);
    Set s2(10);

    s1.insert(2);
    s1.insert(4);
    s1.insert(6);

    s2.insert(1);
    s2.insert(3);
    s2.insert(5);

    if(s1.contain(2)){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    cout<<"set s1 is"<<endl;
    s1.display();

    cout<<"set s2 is"<<endl;
    s2.display();

    s2.remove(3);
    cout<<"set s2 is"<<endl;
    s2.display();
     
    cout<<"union:"<<endl;
    Set A=s1.setunion(s2);
    A.display();

    cout<<"intersection:"<<endl;
    Set B=s1.intersection(s2);
    B.display();

    cout<<"difference:"<<endl;
    Set C=s1.Difference(s2);
    C.display();

    cout<<"symmetric difference:"<<endl;
    Set D=s1.symmetricdifference(s2);
    D.display();
    
    cout<<"cartesian product: "<<endl;
    s1.cartesian_product(s2);
    Set s3(s1);
    s3.display();
    f(s2);
    s2.display();
return 0;




}