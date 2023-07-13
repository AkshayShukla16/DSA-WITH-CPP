
#include <iostream>

using namespace std;


int bitcounter(int n){
    
    int count=0;
    while(n!=0){
        if(n & 1==1){
            count++;
        }
        n= n>>1;
    }
    
    return count;
}

int main()
{
    int a, b;

    cout<<"Enter the two number: ";
    cin>>a>>b;

    int result = bitcounter(a)+bitcounter(b);
    cout<<"Total 1's are: "<< result;
}