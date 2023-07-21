#include<iostream>
using namespace std;


void PrintArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void SwapAlt(int arr[], int size){
    for(int i=0; i<size; i=i+2){
        if(i+1<size){
          // swap(arr[i],arr[i+1]);
          int temp= arr[i];
          arr[i]=arr[i+1];
          arr[i+1]=temp;
        }
    }
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

    // Perform Alternate swapping
    SwapAlt(arr,size);

    cout<<"After Swapping alternate element in Array"<<endl;
    PrintArray(arr, size);
}
