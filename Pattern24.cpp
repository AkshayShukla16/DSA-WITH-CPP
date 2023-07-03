#include<iostream>
using namespace std; 

int main(){

    int n;
    cout<<"Enter the Number: ";
    cin>>n;

    int i=1;
    while(i<=n){

         // print space
        int space = i-1;
        while(space>=0){
            cout<<" ";
            space= space-1;
        }
        
        // print number
        int j=1;
        int value=i;
        while(j<=n-i+1){
            cout<<value;
            value++;
            j++;
        }
        cout<<endl;
        i++;
    }
}