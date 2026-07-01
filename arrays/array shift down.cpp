#include<iostream>
#include<string>
#include<array>
using namespace std;
array<double,11> input_array(array<double,11>arr){ //creates an array fils it an dreturns it
   
cout<<"Enter 11 double values: ";
for(int i=0; i<11; i++){
    cin>>arr[i];
}
return arr;
}
void output_array(array<double,11> arr){
    for(int i=0; i<11; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
array<double ,11> shiftdown(array<double,11> arr){
    for(int i=10; i>0;i--){
       arr[i]=arr[i-1];
    }
    return arr;
}
int main(){
    array<double,11>nums;//uninitiallized array
      nums=input_array(nums);//stores the array in nums
    cout<<"original array is: "<<endl;
     output_array(nums);//outputs the array stored in nums
     nums = shiftdown(nums);//use the original nums and shifts it down and then stores it in nums
    cout<<"Array after 1st shiftdown: "<<endl;
     output_array(nums);
    for(int i=0; i<7; i++){

     nums = shiftdown(nums);
    }
    cout <<"Array after 8 shiftdowns: "<<endl;

    output_array(nums);
  return 0;
}