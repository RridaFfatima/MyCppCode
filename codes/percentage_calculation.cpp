/*Create a function to compute and return the percentage of data in array above above its
average.*/
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;
float percnetage(int arr[], int size){
    int sum=0;
    for(int i=0; i<size;i++){
        sum+=arr[i];
    }
    float avg=0;
    avg=sum/size;
    float percent=0.0;
    int summ=0;
    for(int i=0; i<size; i++){
    if(arr[i]>avg){
        summ+=arr[i];
    }
}
percent=((float)summ/sum)*100;
return percent;
}

int main(){
    srand(time(0));
    int arr[3];
    int i=0;
    int min=100;
    int max=999;

    while(i<3){
        arr[i]=(rand()%(max-min+1)) + min;
        i++;
    }
float result=percnetage(arr,3);
cout<<"the percentage is: "<<result<<endl;
return 0;
}