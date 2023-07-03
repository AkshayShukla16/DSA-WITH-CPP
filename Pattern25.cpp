#include<iostream>
using namespace std; 

int main(){

    int n;
    cout<<"Enter the Number: ";
    cin>>n;

    int i=1;
    int count=1;
    while(i<=n){

         // print space
        int space = n-i;
        while(space>=0){
            cout<<" ";
            space= space-1;
        }
        
        // print number
        int j=1;
        while(j<=i){
            cout<<count;
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}