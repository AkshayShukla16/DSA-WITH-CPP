#include<iostream>
using namespace std;

void PrintArray(int array[], int size){
    for(int i=0; i<size; i++){
      cout<<array[i]<<" ";
    }
}
int main(){
  
  int arr1[15]= {1,2,3};
  PrintArray(arr1, 3);
}