#include<iostream>
using namespace std;

void PrintArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
void Sort01(int arr[], int size){
     int left=0,right= size-1;
     
     while(left<right){
        while(arr[left]==0){
            left++;
        }
        while(arr[right]==1){
            right--;
        }
        while(arr[left]==1 && arr[right]==0 && left<right){
            swap(arr[left], arr[right]);
            left++;
            right--;
        }

     }
}

int main(){

    int arr[8]={1,1,1,0,1,0,1,0};
    int size= sizeof(arr)/sizeof(arr[0]);

    Sort01(arr, size);
    PrintArray(arr,size);
}