#include<iostream>
using namespace std;

int main(){

    int a=2;
    cout<<a<<endl;   // a=2 

    int i=9;
    for(int i=8; i<=8; i++){   // yaha par i=8 vop explicitely create karega
        
        int a= 44;
        cout<<a<<endl;     // yaha par a=44; ye wala a dusara hai upar wala nahi
        cout<<"Hello"<<endl;
    }

    cout<<a<<endl;   // a=2;

    int b=22;
    cout<<b<<endl;
/*

    int b=56;     // error: redeclaration of 'int b'
    cout<<b<<endl;

    */
}