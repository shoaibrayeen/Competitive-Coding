#include<iostream>
using namespace std;

class abc { 
   void f();
   void g();
   //char a;
   //double y;
   //float z;
   int x;
   //bool w;
};

main() {
   cout<<sizeof(abc)<<endl;
}

/*
  Only the class member variables constitutes as the size of the class or its object.
  
  output : 1
  1.if abc contains a char variable
  2.if abc contains a bool variable
  3.if abc contains only declared functions
  4.if abc does not contain anything.
  
  output : 2
  if abc contains a bool variable and a char variable
  
  output : 4
  1.if abc contains an int variable
  2.if abc contains a float variable
  
  
  output : 8
    1. if abc contains a double variable
    2. if abc contains a bool and an int variable 
    3. if abc contains a char and an int variable
    
  
  output : 12
   1. if abc contains a bool and a double variable 
   2. if abc contains a char variable and a double variable
   
  output : 24
   if abc contains a double variable , an int variable ,a char variable , a float variable and a bool variable.
   
  
*/
