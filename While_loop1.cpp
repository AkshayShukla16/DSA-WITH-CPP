#include<iostream>
using namespace std;

int main(){

    int n, sum=0,i=1;
    cout<<"Enter the Number:";
    cin>>n;

    while(i<=n){
        sum=sum+i;
        i++;
        
    }
    cout<<sum<<endl;
}