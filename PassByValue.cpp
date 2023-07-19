
// Pass By value


#include <iostream>
using namespace std;

void Callme(int num){  //yE NUM Copy hai main wale Num ka ye num and main wala num eak nahi hai.
    num++;  // NUM=23
    // maine es wale num variable ko increase kiya tha .
    cout<<"Number in Callme fxn after incresing is:"<<num<<endl; // NUM=23
}

int main()
{
    int num;    //Suppose Num=22;
    cout<<"Enter No: ";
    cin>>num;
    
   Callme(num); // Pass by value concept
   cout<<"Number in main fxn is: "<<num;  // Num=22
}