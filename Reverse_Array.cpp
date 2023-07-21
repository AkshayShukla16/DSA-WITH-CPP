#include<iostream>
using namespace std;

void PrintArray(int arr[], int size){
    for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
}

void RevArray(int arr[], int size){ 
    int start= 0, end = size-1;

    while(start<end){
       int temp = arr[start];
       arr[start]= arr[end];
       arr[end]= temp;

       start++;
       end--;
    }
    cout<<endl;
   

}

int main(){
    
   int arr[100], size;
   cout<<"Enter the size of array: ";
   cin>>size;

   cout<<"Enter element inside the array: ";
   for(int i=0; i<size; i++){
    cin>>arr[i];
   }

   // Printing the original array
   PrintArray(arr, size);
   
   cout<<"Printing Reverse of array"<<endl;
   RevArray(arr, size);  // here my original array changed {for more see Array_Scope.cpp}
   PrintArray(arr,size);

}