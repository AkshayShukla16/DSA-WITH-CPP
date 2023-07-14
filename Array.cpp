#include<iostream>
using namespace std;

int main(){

    // Declaration-->   int values[10]
     /* Initialization*/ 
     int values[10]={0};   // values is the name of array & it store only int type 
   
    // every value inside the arrray become zero, this method only works for 0;

    int myvalue[5];
    fill_n(myvalue, 5, 1); // All fill with 1 value
    
    for(int i=0; i<10; i++){
        cout<<values[i]<<endl;
    }
}