#include<iostream>
using namespace std;

int main(){

    char c;
    cout<< "Enter the Character: "<<endl;
    c= cin.get();

    if(c>=97 && c<=122){
        cout<<"Lower case"<<endl;
    } else if(c>=65 && c<=90){
        cout<<"Upper case"<<endl;
    } else{
        cout<<"Numeric value"<<endl;
    }
}