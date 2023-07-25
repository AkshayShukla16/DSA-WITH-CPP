// here WE HAVE USED BINARY SEARCH METHOD 

#include<iostream>
using namespace std;

int first_Occur(int arr[], int size, int key){
    
    int start=0, end=size;
    int mid= start+(end-start)/2;     //mid= (start+end)/2; ye bhi use kar sakate hai but problem ho sakta hai
    int firstIndex= -1;

    while(start<=end){
     
        // for leftmosdt occurence (1st occcurence)
        if(arr[mid]==key){
            firstIndex= mid;
            end= mid-1;
        } 
        else if(arr[mid]>key){
            end=mid-1;
        }
        else {     // when arr[mid]<key
            start=mid+1;
        }
        mid=  start+(end-start)/2;
  }
    return firstIndex;
}

int last_Occur(int arr[], int size, int key){
    
    int start=0, end=size;
    int mid= start+(end-start)/2;     //mid= (start+end)/2; ye bhi use kar sakate hai but problem ho sakta hai
    int lastIndex=-1;

    while(start<=end){
     
        // for rightmost occurence (last occcurence)
        if(arr[mid]==key){
            lastIndex= mid;
            start= mid+1;
        } 
        else if(arr[mid]>key){
            end=mid-1;
        }
        else {     // when arr[mid]<key
            start=mid+1;
        }
        mid=  start+(end-start)/2;
  }
    return lastIndex;
}
int main(){

    int arr[10]={0,0,1,4,4,4,4,4,7,8};
    int size= sizeof(arr)/sizeof(arr[0]);
    int key=4;
    int res1= first_Occur(arr, size, key);
    int res2=  last_Occur(arr, size, key);

    cout<<"First Occurence of 4 is: "<< res2 - res1 + 1<<endl;
  
   
}