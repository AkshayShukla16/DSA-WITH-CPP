#include<iostream>
using namespace std;

int main(){

    int x;
    x= cin.get(); // ye hamesh character leta hai (space ko bhi consider karega)
    
    //let x=6 put kiya (it means that x='6' hua because of using cin.get())
    // Agar hum print karaye, it gives 54 because '6' character hai uska ASCII Value 54 typecasting hoke answer dega.
    cout<<"Value of x is: "<<x<<endl;
}