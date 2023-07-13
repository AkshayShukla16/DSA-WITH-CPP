#include <iostream>
using namespace std;

int nthBit(int n){
    
    int a=0, b=1,value;
    for(int i=1; i<=n; i++){
        int nxtTerm= a+b;
        a=b;
        b=nxtTerm;
    }
    return b;
}

int main()
{
    int num;
    cout<<"Enter No: "<<endl;
    cin>>num;
    
    if(num==1){
        cout<<"0"<<endl;
    }else if(num==2){
        cout<<"1"<<endl;
    }else {
        int result= nthBit(num-2);  // kyoki nthBit fxn me a=0, b=1 milake 2 term pahele he hai
        cout<<result;
    }
}