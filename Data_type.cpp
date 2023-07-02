#include<iostream>
using namespace std;

int main(){

  int x= 223;
  cout<<"Value of x is: "<< x<<endl;
  cout<<"Size of int x is: "<<sizeof(x)<<endl;

  float y= 1.2;
  cout<<"Value of y is: "<< y<<endl;
  cout<<"Size of float y is: "<<sizeof(y)<<endl;

  double d= 1.334;
  cout<<"Value of d is: "<< d<<endl;
  cout<<"Size of double d is: "<<sizeof(d)<<endl;

  char c= 'a';
  cout<<"Value of c is: "<<c<<endl;
  cout<<"Size of char c is: "<<sizeof(c)<<endl;

  bool b= '1';
  cout<<"Size of bool b is: "<<sizeof(b)<<endl;

}