#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the Number: ";
    cin>>n;

    int i=1;
    while(i<=n){

        // print space
        int space=i-1;
        while(space>=0){
            cout<<" ";
            space= space-1;
        }

        // print star *

        int j=1;
        while(j<=n-i+1){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }

}

