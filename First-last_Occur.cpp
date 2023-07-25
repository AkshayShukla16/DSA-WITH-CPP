// here WE HAVE USED BRUTE FORCE METHOD 
// Next we can use binary search, because it is said that we have given the sorted array

#include<iostream>
using namespace std;

void first_last(int arr[], int size, int key){
    int index=0;
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            cout<<"first position: "<<i<<endl;
            index= i;
            break;
        }
    }

     for(int j=index; j<size; j++){
        int val =arr[j+1];
        if(arr[j]==key && arr[j]<val && j<size){
            cout<<"last position: "<<j<<endl;
            index= j;
            break;
        }
    }
}

int main(){

    int arr[8]={0,0,1,2,2,2,3,3};
    int size= sizeof(arr)/sizeof(arr[0]);
    int key=2;
    first_last(arr, size, key);
}