#include<iostream>
using namespace std;
 
 
void PrintArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int UniqueEle(int arr[], int size){
    int ans=0;
    for(int i=0; i<size; i++){
         ans= ans^arr[i];
        }
    cout<<"Non repeating Number is: "<< ans;
    }

int main(){
    int arr[100], size;
    cout<<"Enter the size of array: ";
    cin>>size;

    cout<<"Enter the element inside array: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"Printing the Array"<<endl;
    PrintArray(arr, size);
  
    UniqueEle(arr,size);
}
