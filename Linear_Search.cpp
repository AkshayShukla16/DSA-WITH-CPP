#include<iostream>
using namespace std;


int LinSearch(int num[], int size,int key){
    for(int i=0; i<size; i++){
        if(key==num[i]){
            cout<<"Number is Present in array at index: "<<i;
             
        }
    }

}

int main(){
    
   int arr[100]={1,4,7,2,9,12,67,-9,4,-5}, size=10, key;
   cout<<"Enter the key to be found: ";
   cin>>key;
   
   LinSearch(arr, size, key);


}