#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the Number: ";
    cin>>n;

    int row=1;
    while(row<=n){
        int col=1;
        int value= row;
        while(col<=row){
            cout<<value<<" ";
            value=value-1;
            col++;
        }
        cout<<endl;
        row++;
    }
}

// Method 2 withgout using extra variable
/*
 int n;
 cout<<"Enter thye row ";
 cin>>n;

 int row=1;
 while(row<=n){
    int col=1;
    while(col<=row){
        cout<<i-j+1<<" ";
        col++;
    }
    cout<<endl;
    row++;
 }

*/