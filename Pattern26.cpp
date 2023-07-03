#include<iostream>
using namespace std; 


// INCOMPLETE HAI //


int main(){

    int n;
    cout<<"Enter the Number: ";
    cin>>n;

    int i=1;
    while(i<=n){

         // print space
        int space = n-i;
        while(space){   //space>=0 he hai
            cout<<" ";
            space= space-1;
        }
        
        // print 1st triangle number
        int j=1;
        while(j<=i){
            cout<<j;
            j++;
        }

        //  print 2nd triangle number
        int start= i-1;
        while(start){
            cout<<start;
            start--;
        } 

        cout<<endl;
        i++;
    }
}