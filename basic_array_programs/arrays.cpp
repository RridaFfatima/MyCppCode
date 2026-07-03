#include<iostream>
#include<string>
#include<array>
using namespace std;
int max_contiguous_gain(array<int,4>daily_change){
    int current_sum=0;
   int max_sum=0;
   int start=0;
   int end=-1;
   int temporary=0;
   for(int i=0; i<4; i++){
    current_sum+=daily_change[i];
   
   if(current_sum<0){
    current_sum=0;
    temporary =i+1;
   }
   if(current_sum>max_sum){
    max_sum=current_sum;
    start=temporary;
    end=i;

   }
   
}
cout<<"subarray index"<<start<<","<<end<<endl;
   return max_sum;

}
int main(){
    array<int,4>daily_change={0,0,0,0};
    int result=max_contiguous_gain(daily_change);
    cout<<"maximum sum: "<<result;
    return 0;
}