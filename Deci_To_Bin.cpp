#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter the Number: ";
    cin>>n;

    float ans=0;   // int he lena hai but offline vs code me proper run nahio ho raha tha that's why we choosen float
    int i=0;

    while(n!=0){
        int bit= n & 1;
        ans = (bit*pow(10,i)) + ans;
        n= n >> 1;
        i++;
    }

    cout<<"Answer is: "<<ans;

}