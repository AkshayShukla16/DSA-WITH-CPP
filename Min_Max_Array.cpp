#include<iostream>
using namespace std;


int getMax(int arr[], int size){
    int maximum= INT32_MIN;
    for(int i=0; i<size; i++){      // we can also use inbuilt fxn maximum =max(maximum, arr[i] )
        if(arr[i]>maximum){
            maximum=arr[i];
        }
    }
        return maximum;
}

int getMin(int arr[], int size){
    int minimum= INT32_MAX;
    for(int i=0; i<size; i++){    // we can also use inbuilt fxn minimum =min(minimum, arr[i] )
        if(arr[i]<minimum){
            minimum=arr[i];
        }
    }
    return minimum;
} 

int main(){

    int size;
    cout<<"Enter the size of Array: ";
    cin>>size;

    int num[100];    //Array Declaration
    for(int i=0; i<size; i++){
        cin>>num[i];
    }

    cout<<"Maximum is: "<<getMax(num, size)<<endl;
    cout<<"Manimum is: "<<getMin(num, size)<<endl;

}