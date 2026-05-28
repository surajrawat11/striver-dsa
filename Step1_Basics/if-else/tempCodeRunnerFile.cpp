#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter the age of the person: ";
    cin>>age;
    if(age>=18){
        cout<<"Adult";
    }
    else{
        cout<<"Not adult";
    }
    return 0;
}