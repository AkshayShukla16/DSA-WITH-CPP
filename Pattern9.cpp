#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int row=1;
    while(row <= n){
        int col=1;
        int value= row;
        while(col <= row){
            cout<<value<<" ";
            value++;
            col++;
        }
        cout<<endl;
        row++;
    }
}

// Method 2 (without using extra variable)
/*

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int row=1;
    while(row <= n){
        int col=row;
        while(col < row*2){
            cout<<col<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
}

*/