#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the Number: ";
    cin>>n;

    int i=1;
   
    while(i<=n){

        // print space
        int space= n-i;
        while(space>=0){
           cout<<" ";
           space--;
        }
        
        // print star *
        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}