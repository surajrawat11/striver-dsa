/*
Take the age from the user and then decide accordingly:
1. If age < 18
   → print "Not eligible for job"
2. If age >= 18 and age<=54
   → print "Eligible for job"
3. If age >= 55 and age <= 57
   → print "Eligible for job, but retirement soon"
4. If age > 57
   → print "Retirement time"
*/

#include<iostream>
using namespace std;
int main(){
   int age;
   cout<<"enter the age: ";
   cin>>age;
   if(age<18){
      cout<<"Not eligible for job";
   }
   else if(age<=57){
      cout<<"Eligible for job";
      if(age>=54){
         cout<<", but retirement soon";
      }
   }
   
   else{
      cout<<"Retirement time";
   }
   return 0;
}
