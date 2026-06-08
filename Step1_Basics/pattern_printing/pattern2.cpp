/*
*
**
***
****
*****
*/

#include<iostream>
using namespace std;

class pattern{
    public: 
      void print2(int n){
        for(int i=0;i<n;i++){
            for(int j =0;j<i;j++){
                cout<<"*";
            }
            cout<<endl;
        }

      }
};

int main(){
    pattern sol;
    int n;
    cout<<"enter the number: ";
    cin>>n;
    sol.print2(n);
    return 0;
}