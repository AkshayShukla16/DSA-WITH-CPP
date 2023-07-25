// In binary search we required sorted order either in ascendind or descending
// jo hum left ya right wala part choose karte hai usme hame sorting dekhna hai uske baad decide karna hai

// here array are sorted in ascending order
#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key){

    int start=0, end=size-1;
     int mid= start+((end-start)/2);    //mid= (start+end)/2 yaha problem occur ho sakta tha
    
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        
         if(arr[mid]<key){   //go to right part
            start= mid+1;
        }else {    //arr[mid]>key  //go to left part
         end=mid-1;
        }
        mid= start+((end-start)/2);
        //mid=(start+end)/2;
    }
    return -1;
}

int main(){

    int arr1[5]={1,4,6,9,19};   //odd sorted array
    int arr2[6]={5,7,9,12,50,61};
  //  int size1= sizeof(arr1)/sizeof(arr1[0]);
   // int key=9;
    
    cout<<"Searching the key=9 in an even array with sorted in asc order"<<endl;
    int EvenArray= BinarySearch(arr1, 5, 9);
    cout<<"Position is: "<<EvenArray<<endl;

    
    cout<<"Searching the key=5 in an odd array with sorted in asc order"<<endl;
    int oddArray= BinarySearch(arr2, 6, 5);
    cout<<"Position is: "<<oddArray<<endl;
}