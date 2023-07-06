#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the Number: ";
    cin>>n;

    int a=0,b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=1; i<=n; i++){

        int nxtNum= a+b;
        cout<<nxtNum<<" ";

        a=b;
        b=nxtNum;

    }
}