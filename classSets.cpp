//bsdsf25m050
#include<iostream>
#include<string>
using namespace std;
class Set{
    private:
    int *data;
    int capacity;
    int noofelements;
    public:
    Set ( int cap = 5){
        if(cap<=0){
            capacity=5;

        }
        else{
            capacity=cap;

    }
    data = new int[capacity];
    noofelements=0;

    }
   

    Set( const Set & ref){
        capacity=ref.capacity;
        noofelements=ref.noofelements;
        data=new int[capacity];
        for(int i=0; i<noofelements; i++){
            data[i]=ref.data[i];
        }
    }
 ~Set(){
        delete [] data;
    }

    bool contain(int n){
        for(int i=0; i<noofelements; i++){
            if(data[i]==n){
                return true;
            }
        }
        return false;
    }


    void insert ( int element){
        if(noofelements==capacity){
            cout<<"no space"<<endl;
            return ;
        }
        if(!contain(element)){
            data[noofelements]=element;
            noofelements++;
        }
    }

    void remove ( int element){
        for(int i=0;i<noofelements;i++){
            if(data[i]==element){
                for(int j=i; j<noofelements-1; j++){
                    data[j]=data[j+1];
                }
                  noofelements--;
                  return ;

            }
        }

    }
    Set calcUnion ( Set & s2 ){
        Set result(capacity+s2.capacity);
        for(int i=0; i<noofelements; i++){
            result.insert(data[i]);
        }
         for(int i=0; i<s2.noofelements; i++){
            result.insert(s2.data[i]);
        }
        return result;
    }

    Set calcIntersection ( Set & s2 ){
        Set result(capacity);

        for(int i=0; i<noofelements; i++){
            

            if(s2.contain(data[i])){
            result.insert(data[i]);
        }
    }
    return result;

    }
    Set calcSymmetricDifference ( Set & s2 ){
        Set result(capacity+s2.capacity);
         for(int i=0; i<noofelements; i++){
             if(!s2.contain(data[i])){
            result.insert(data[i]);
        }
    }
        for(int i=0; i<s2.noofelements; i++){
             if(!contain(s2.data[i])){

            result.insert(s2.data[i]);
        }
    }
        
        return result;
    
    }
    int getCardinality(){
    return noofelements;
    }
     void display(){
        cout<<" { ";
        for(int i=0; i<noofelements; i++){
            cout<<data[i]<<" ";

        }
        cout<<"}"<<endl;

     }

Set calcDifference ( Set & s2 ){
    Set result(capacity);
        for(int i=0; i<noofelements; i++){
             if(!s2.contain(data[i])){

            result.insert(data[i]);
        }
    }
    return result;
}

int isMember ( int val){
    for(int i=0; i<noofelements; i++){
        if(data[i]==val){
            return 1;
        }
    }
    return 0;
}

int isSubSet ( Set & s2 ){
    for(int i=0; i<s2.noofelements; i++){
        if(!(contain(s2.data[i]))) {
            return 0; 
        }
    }
    return 1;

}


void reSize ( int newcapacity ){
    int * newdata= new int[newcapacity];
    for(int i=0; i<noofelements; i++){
            newdata[i]=data[i];
        
        }
        delete[] data;
        capacity=newcapacity;
        data = newdata;
    }


};
int main(){
    int size1;
    cout<<"enter size of set 1: "<<endl;
    cin>>size1;
    Set s1(size1);
    cout<<"enter elements of se1 2: "<<endl;
    for(int i=0;i<size1; i++){
        int j;
        cin>>j;

    s1.insert(j);
}
int size2;
    cout<<"enter size of set 1 : "<<endl;
    cin>>size2;
    Set s2(size2);
    cout<<"enter elements of set 2: "<<endl;
    for(int i=0;i<size2; i++){
        int j;
        cin>>j;

    s2.insert(j);
}



Set s3=s1.calcUnion(s2);
cout<<"union : ";
s3.display();

Set s4=s1.calcIntersection(s2);
cout<<"intersection : ";
s4.display();

Set s5=s2.calcSymmetricDifference(s1);
cout<<"symmetric difference: ";
s5.display();

Set s6=s1.calcDifference(s2);
cout<<"difference s1-s2: "<<endl;
s6.display();
 
cout<<"is member? "<<s2.isMember(4)<<endl;

cout<<" s2 is a subset of s1 ? "<<s1.isSubSet(s2)<<endl;

cout<<"cardinality of s2 is : " <<s2.getCardinality()<<endl;
s1.remove(2);
cout<<"after removal set  1 is: ";
s1.display();

s1.reSize(6);
s1.display();
return 0;

}