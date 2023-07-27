#include<iostream>
using namespace std;

int PivotEle(int arr[], int size){
    int start=0, end=size-1;
    int mid= start+(end-start)/2;

    while(start<end){
        if(arr[mid]>=arr[0]){
            start= mid+1;
        }
        else {
            end=mid;
        }
        mid= start+(end-start)/2;
    }
    return start;
}
int main(){

    int arr[5]={7,9,1,2,3};
    int size= sizeof(arr)/sizeof(arr[0]);

   int ans=  PivotEle(arr, size);
   cout<<"Pivot element (1) is present at index: "<<ans;

}