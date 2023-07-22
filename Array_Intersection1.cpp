// Here we have both the array as sorted (previous ques me nahi tha) in increasing order
// This method is he optimised one. Hum is ques ko previous method se bhi solve kar sakte 
// hai but bahut time lega .

#include<iostream>
using namespace std;
 
 
int ArrayInter(int arr1[], int arr2[], int size1,int size2){
    int i=0,j=0;
   while(i<size1 && j<size2){

    if(arr1[i]==arr2[j]){
        cout<<arr1[i]<<"is common"<<endl;
        i++;
        j++;
    }else if(arr1[i]<arr2[j]){
        i=i++;
    }else{       // when arr1[i]>arr2[j]
        j++;
    }
   }
}

int main(){
    int arr1[100],arr2[100],size2,size1;

    cout<<"Enter the size of array1: ";
    cin>>size1;

    cout<<"Enter the element inside array1 in sorted Increasing order : ";
    for(int i=0; i<size1; i++){
        cin>>arr1[i];
    }

    cout<<"Enter the size of array2: ";
    cin>>size2;

    cout<<"Enter the element inside array2 in sorted Increasing order : ";
    for(int i=0; i<size2; i++){
        cin>>arr2[i];
    }
  
    ArrayInter(arr1,arr2,size1,size2);
}
