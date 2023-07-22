#include<iostream>
using namespace std;

void PairSum(int arr[], int size, int sum){

    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]+arr[j]==sum){
                cout<<min(arr[i],arr[j])<<" "<<max(arr[i],arr[j])<<endl;
            }
        }
    }
}

int main(){

    int arr[5]={1,4,6,3,2};
    int size= sizeof(arr)/sizeof(arr[0]);
    int sum=5;

    PairSum(arr, size, sum);
}