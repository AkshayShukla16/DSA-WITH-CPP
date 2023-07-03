#include<iostream>
using namespace std;

int main(){
 
 int n;
    cout<<"Enter the Number: ";
    cin>>n;

    int i=1;  //row
    while(i<=n){
        char ch ='A';
        int j=1; //col
        while(j<=n){
            
            cout<<ch<<" ";
            ch=(ch+1);
            j++;
        }
        cout<<endl;
        i++;
    }

}