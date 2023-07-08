/* Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2x.

Example 1:

Input: n = 1
Output: true
Explanation: 20 = 1
Example 2:

Input: n = 16
Output: true
Explanation: 24 = 16
*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
   
    int n;
    cout<<"Enter the No: ";
    cin>>n;

    bool value= 0;
    for(int i=0; i<=30; i++){
        int ans =pow(2,i);
        if(n==ans){
            value=1;
        }
    }
    if(value==1){
        cout<<"True";
    }else{
        cout<<"false";
    }
}