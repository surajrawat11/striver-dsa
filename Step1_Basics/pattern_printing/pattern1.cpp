/*Take an integer N as input to define the size of the square.
Use a loop from 0 to N-1 to represent each row.
Inside that loop, use another loop from 0 to N-1 to print stars in the current row.
Print "* " during each inner loop iteration to form the row.
After each inner loop completes, move to the next line.*/


#include<iostream>
using namespace std;
    void print1(int n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }

int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    print1(n);
}
    

