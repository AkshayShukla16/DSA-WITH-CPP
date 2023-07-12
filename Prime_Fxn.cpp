#include<iostream>
using namespace std;

bool isPrime(int a){
    for(int i=2; i<a; i++){
        if(a%i==0){
            return 0;  // not a prime
        }
    }
    return 1; // is Prime Number
}

int main(){
 int num;
 cout<<"enter the number: ";
 cin>>num;

 if(isPrime(num)){
    cout<<"prime number";
 }else{
    cout<<"Not a prime";
 }
}