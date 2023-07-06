#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    float ans=0;
    int i=0;
    while(n!=0){
       int rem= n%2;
       ans= (rem*pow(10,i))+ans;
       n=n/2;
       i++;
       
    }
    cout<<ans;
}