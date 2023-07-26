#include <iostream>

using namespace std;

 int MountMax(int arr[], int size){
     
     int start=0, end=size-1;
     int mid= start+(end-start)/2;
     while(start<end){
         
         if(arr[mid]<arr[mid+1]){
             start= mid+1;
         }
         else{           // if(arr[mid]>arr[mid+1]) ye wala case
             end=mid;
         }
         mid= start+(end-start)/2;
     }
     return start;
 }

int main()
{
    int arr[8]={1,2,4,6,7,3,2,0};
    int size= sizeof(arr)/sizeof(arr[0]);
    int result=MountMax(arr, size);
    cout<<result;

}