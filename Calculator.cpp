#include<iostream>
using namespace std;

int main(){

    int a,b;
    char op;
    cout<<"Enter no: ";
    cin>>a>>b;

    cout<<"Enter operation: ";
    cin>>op;


    switch(op){
        case '+': cout<<"ans: "<<a+b<<endl;  // case 'a' hum int ya kuch bhi le sakte hai
        break;                        // breakm isliye use karte hai taki loop se bahara aa sake, nahi to sab niche ka bhi print kar dega.

        case '-': cout<<"ans: "<<a-b<<endl;
        break;

        case '*': cout<<"ans: "<<a*b<<endl;
        break;

        case '/': cout<<"ans: "<<a/b<<endl;
        break;

        case '%': cout<<"ans: "<<a%b<<endl;
        break;

        default: cout<<"Wrong input"<<endl;   
    }
}