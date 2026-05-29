#include<iostream>  // an array is a collection of elements of the same type stored in contiguous memory locations. 
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter value in array: ";
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    cout<<arr[2]<<endl;
    arr[3]+=10;
    cout<<arr[3];
    return 0;
}