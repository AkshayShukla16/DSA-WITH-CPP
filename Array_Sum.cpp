#include<iostream>
using namespace std;


int ArraySum(int num[], int size){
    int sum=0;
    for(int i=0; i<size; i++){
        sum=sum+num[i];
    }
   return sum;
}

int main(){
    
   int arr[100], size;
   cout<<"Enter the size of array: ";
   cin>>size;
   cout<<"Enter element inside the array: ";
   for(int i=0; i<size; i++){
    cin>>arr[i];
   }

   int result= ArraySum(arr, size);
   cout<<"Sum is: "<<result;


}