#include<iostream>
using namespace std;

int main(){

    int day;
    cout<<"Enter day no: ";
    cin>>day;

    switch(day){
        case 1: cout<<"Monday"<<endl;  // case 'a' hum int ya kuch bhi le sakte hai
        break;                        // breakm isliye use karte hai taki loop se bahara aa sake, nahi to sab niche ka bhi print kar dega.

        case 2: cout<<"Tuesday"<<endl;
        break;

        case 3: cout<<"Wednesday"<<endl;
        break;

        case 4: cout<<"Thursday"<<endl;
        break;

        case 5: cout<<"Friday"<<endl;
        break;

        case 6: cout<<"Saturday"<<endl;
        break;

        case 7: cout<<"Sunday"<<endl;
        break;

        default: cout<<"Wrong input"<<endl;   
    }
}