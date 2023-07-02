#include<iostream>
using namespace std;

int main(){

    int n;
    int i=2;
    cout<<"Enter the Number: ";
    cin>>n;

    while(i<n){
        if(n%i==0){
            cout<<"Not a Prime Number";
        }else{
            cout<<"Prime Number"<<endl;
        }
        i++;
    }
}