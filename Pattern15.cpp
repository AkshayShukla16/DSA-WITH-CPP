#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<< char(64+i+j-1)<<" ";    // char('A'+i+j-2)
            j++;
        }
        cout<<endl;
        i++;
    }
}