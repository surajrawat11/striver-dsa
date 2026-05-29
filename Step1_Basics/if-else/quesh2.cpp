/*
A school has the following rules for grading system:
a. Below 25 – F
b. 25 to 44 – E
c. 45 to 49 – D
d. 50 to 59 – C
e. 60 to 79 – B
f. 80 to 100 – A
Ask user to enter marks and print the corresponding grade.
*/

#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter your marks: ";
    cin>>marks;
    if(marks<25){
        cout<<"Grade is F";
    }
    else if(marks<=44){
        cout<<"Grade is E";
    }
    else if(marks<=49){
        cout<<"Grade is D";
    }
    else if(marks<=59){
        cout<<"Grade is C";
    }
    else if(marks<=79){
        cout<<"Grade is B";
    }
    else if(marks<=100){
        cout<<"Grade is A";
    }

    return 0;
}