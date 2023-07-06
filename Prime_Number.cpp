#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the Number: ";
    cin>>n;

    bool isPrime = 1;

    for(int i=2;i<n;i++){
        if(n%i == 0){
            isPrime=0;
            break;
        }
       
    }

     if(isPrime==0){
            cout<<n<<" Is not a Prime Number"<<endl;
        }else{
             cout<<n<<" Is a Prime Number"<<endl;
        }


}