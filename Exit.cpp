#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter N0: ";
    cin>>n;

    while(n){
        switch(n){
            case 1: cout<<"hello 1"<<endl;
            break;

            case 2: cout<<"hello 2"<<endl;
            break;

            default: cout<<"Number is not 1 & 2";
        }
        exit(0);   //here we can also use the break statement
    }
}