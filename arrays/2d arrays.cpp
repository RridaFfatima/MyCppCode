  #include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main(){
    string timings[3]={"morning", "noon", "evening"};
    string city[6]={"multan","lahya","kasur","Lahore","DG khan", "gujrawala"};
    float temp[3][6]={
        {34.7f, 45.7f, 34.8f, 24.9f, 45.0f, 55.5f},
    {34.7f, 45.7f, 34.8f, 24.9f, 45.0f, 55.5f},
{34.7f, 45.7f, 34.8f, 24.9f, 45.0f, 55.5f}
};
cout<<setw(10)<<left<<"timings";
for(int i=0; i<6; i++){
    cout<<setw(10)<<right<<city[i];
}
cout<<endl;
for(int i=0; i<3;i++){
cout<<setw(10)<<left<<timings[i];
    for(int j=0; j<6; j++){
        cout<<setw(10)<<right<<fixed<<setprecision(2)<<temp[i][j];

    }
    cout<<endl;
}
float dgkhan_avg=0.0;
float sum=0.0;
for(int i=0; i<3; i++){
sum+=temp[i][4];
    }

dgkhan_avg=sum/3.0f;
cout<<"average of dg khan is: "<<dgkhan_avg;
cout<<endl;
float total=0.0;
for(int i=0; i<3; i++){
    total+=temp[i][4];
}
cout<<"total for dgkhan is : "<<total<<endl;
float noon=0.0;
for(int i=0; i<6; i++){
    noon+=temp[1][i];
}
cout<<"total at noon is: "<<noon<<endl;
double max[6];
for(int i=0; i<6; i++){
     max[i]=temp[0][i];
    for(int j=1; j<3; j++){
        if(temp[j][i]>max[i]){
            max[i]=temp[j][i];
        }
    }
}
cout<<setw(10)<<left<<"city"<<setw(10)<<right<<"Max temp"<<endl;
    for(int j=0; j<6;j++){
        cout<<setw(10)<<left<<city[j]<<setw(10)<<right<<fixed<<setprecision(2)<<max[j];
    
    cout<<endl;
}
return 0;
}
