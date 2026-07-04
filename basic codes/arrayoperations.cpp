#include<iostream>
#include<string>
using namespace std;
int getTotal(int arr[3][3]){
    int sum=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sum+=arr[i][j];
        }
    }
return sum;

}
double getAverage(int arr[3][3]){
    int sum=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sum+=arr[i][j];
        }
    }
    double average=0.0;
    average=sum/3/3;
    return average;

}
int getRowTotal(int arr[3][3],int i){
    int sum=0;
        for(int j=0; j<3; j++){
            sum+=arr[i][j];

        }
        return sum;
    }
    int getColumnTotal(int arr[3][3],int i){
    int sum=0;
        for(int j=0; j<3; j++){
            sum+=arr[j][i];

        }
        return sum;
    }

int getHighestInRow(int arr[3][3], int i){
        int max=arr[i][0];
       for( int j=0; j<3; j++){
        if(arr[i][j]>max){
            max=arr[i][j];

        }
       }
    
    return max;
}
int getLowestInRow(int arr[3][3], int i){
       int  min=arr[i][0];
       for( int j=0; j<3; j++){
        if(arr[i][j]<min){
            min=arr[i][j];

        }
       }
    
    return min;
}

int main(){
int arr[3][3]={{1,2,3},{1,2,3}};
int total=getTotal(arr);
cout<<"total: "<<total<<endl;
double average=getAverage(arr);
cout<<"average: "<<average<<endl;
int rtotal=getRowTotal(arr,1);
cout<<"rowtotal: "<<rtotal<<endl;
int ctotal=getColumnTotal(arr,1);
cout<<"column total: "<<ctotal<<endl;
int highest=getHighestInRow(arr,1);
cout<<" highest: "<<highest<<endl;
int lowest=getLowestInRow(arr,1);
cout<<"Lowest: "<<lowest<<endl;
return 0;
}







