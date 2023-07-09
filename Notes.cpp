#include<iostream>
using namespace std;

int main(){

    int amount;
    cout<<"Enter the amount: ";
    cin>>amount;

    int Rs100, Rs50, Rs20;

    switch(1){    //indicate true condition
        case 1: Rs100= amount/100;
                amount= amount%100;   // amount= amount-(Rs100 * 100)
                cout<<"Total 100 Note is: "<<Rs100<<endl;
        
        case 2: Rs50= amount/50;
                amount= amount%50;   // amount= amount-(Rs100 * 100)
                cout<<"Total 50 Note is: "<<Rs50<<endl;
        
        case 3: Rs20= amount/20;
                amount= amount%20;   // amount= amount-(Rs100 * 100)
                cout<<"Total 20 Note is: "<<Rs20<<endl;
        
        case 4: cout<<"Total 1 Note is: "<<amount<<endl;
        
        break;
        
    }
}