#include<iostream>
using namespace std;


int update(int num[], int size){
    cout<<"Inside the update fxn"<<endl;
    num[0]={100};
    for(int i=0; i<size; i++){
        cout<<num[i]<<" ";
    }
    cout<<endl;
    cout<<"Now move to the main fxn"<<endl;
}
int main(){
    
    int size=3;
    int arr[3]= {1,2,3};
    update(arr, size);

    cout<<"Inside main Fxn"<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }


}