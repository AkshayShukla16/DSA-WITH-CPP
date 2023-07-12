#include<iostream>
using namespace std;

int factorial(int n){
    int fact= 1;
    for(int i=1; i<=n; i++){
     fact= fact*i;
    }
    return fact;
}


 int nCr(){
    int n,r;
    cout<<"Enter n & r value: ";
    cin>>n>>r;

    float ans= factorial(n)/(factorial(r) * factorial(n-r));
    return ans;
 }
int main(){
   
   float result= nCr();
   cout<<"Answer is: "<<result<<endl;
}