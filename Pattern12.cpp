#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the Number: ";
    cin>>n;

    int i=1;  //row
    while(i<=n){
        int j=1;  //column
        while(j<=n){
            cout<<char ('A'+n-i)<<" ";
            j++;
        }
        cout<<endl;
        i++;

    }
}