#include<iostream>
using namespace std;


int getMax(int arr[], int size){
    int max= INT32_MIN;
    for(int i=0; i<size; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
        return max;
}

int getMin(int arr[], int size){
    int min= INT32_MAX;
    for(int i=0; i<size; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
} 

int main(){

    int size;
    cout<<"Enter the size of Array: ";
    cin>>size;

    int num[100];    //Array Declaration
    for(int i=0; i<size; i++){
        cin>>num[i];
    }
   
    int Max_Value= getMax(num, size);
    int Min_Value= getMin(num, size);

    cout<<"Maximum is: "<<Max_Value<<endl;
    cout<<"Manimum is: "<<Min_Value<<endl;

}