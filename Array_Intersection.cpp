#include<iostream>
using namespace std;
 
 // This method is called as two pointer method
int ArrayInter(int arr1[], int arr2[], int size1,int size2){
    
    for(int i=0; i<size1; i++){
        // int element= arr1[i];
          for(int j=0; j<size2; j++){
            if(arr1[i]==arr2[j]){
                cout<<"Value "<<arr1[i]<<" is present in both the Array"<<endl;
                arr2[j]=INT32_MIN;
                break;
            }
          } 
    }
}

int main(){
    int arr1[100],arr2[100],size2,size1;

    cout<<"Enter the size of array1: ";
    cin>>size1;

    cout<<"Enter the element inside array: ";
    for(int i=0; i<size1; i++){
        cin>>arr1[i];
    }

    cout<<"Enter the size of array2: ";
    cin>>size2;

    cout<<"Enter the element inside array2: ";
    for(int i=0; i<size2; i++){
        cin>>arr2[i];
    }
  
    ArrayInter(arr1,arr2,size1,size2);
}
