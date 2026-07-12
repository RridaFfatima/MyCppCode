#include<iostream>
#include<string>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int *p=&arr[0];
    cout<<"address of first index:" <<p<<endl;
    cout<<" enter int array elements:"<<endl;
    for(int i=0; i<5;i++){
        cin>>*(p+i);
    }
    cout<<"value and adress of array elements are:"<<endl;

    for(int i=0; i<5; i++){
        cout<<"value: "<<*(p+i)<<endl;
        cout<<"address: "<<p+i<<endl;
    }

    cout<<"for char type: "<<endl;
    char carr[5]={'*','B','C','D','E'};
    char *q=&carr[0];
    cout<<"address of first index:" <<(void*)q<<endl;
    cout<<" enter char array elements:"<<endl;
    for(int i=0; i<5;i++){
        cin>>*(q+i);
    }
    cout<<"value and adress of array elements are:"<<endl;

    for(int i=0; i<5; i++){
        cout<<"value: "<<*(q+i)<<endl;
        cout<<"address: "<<static_cast<void*>(q+i)<<endl;
    }
    cout<<"for doubble: "<<endl;
    

    double darr[5]={1.0,2.0,3.0,4.0,5.0};
    double *r=&darr[0];
    cout<<"address of first index:" <<r<<endl;
    cout<<" enter double array elements:"<<endl;
    for(int i=0; i<5;i++){
        cin>>*(r+i);
    }
    cout<<"value and adress of array elements are:"<<endl;

    for(int i=0; i<5; i++){
        cout<<"value: "<<*(r+i)<<endl;
        cout<<"address: "<<r+i<<endl;
    }
        
    
    return 0;
}