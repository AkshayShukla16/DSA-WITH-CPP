//Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
/*
Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321   */

#include<iostream>
#include<math.h>
using namespace std;

int main(){
   
    int n;
    cout<<"Enter the No: ";
    cin>>n;
    
    int digit=0,ans=0,i=0;
    while(n!=0){

       int digit= n%10;
       if((ans>INT32_MAX/10) || (ans<INT32_MIN/10)){
        cout<<0;
       }
       ans = (ans*10)+digit;
       n=n/10;
    }
    cout<<ans;
}