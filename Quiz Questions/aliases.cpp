#include<iostream>
using namespace std;
 
int main()
{
  int x = 10;
  int& ref = x;
  ref = 20;
  cout << "x = " << x << endl ;
  x = 30;
  cout << "ref = " << ref << endl;
  return 0;
}

/*
What will be the output of the above code?

Output:
x = 20
ref = 30

Reason/Explanation:
ref is an alias of x, so if we change either of them, we can see the change in other as well.
If we change in line 7 from int& ref to int ref then the Output will be like -
x = 10
ref = 20
With &, ref is being created as an alias of x and will refer to the address of x. As we wil be changing any of them,
the value will be reflected in both places.

After line 7, the pointers will be as below:
x   | 10
       ^
       |
ref |  ■


After line 8, the pointers will be as below:
x   | 20
       ^
       |
ref |  ■

Line 9 will print "x = 10"

After line 10, the pointers will be as below:
x   | 30
       ^
       |
ref |  ■

Line 11 will print "ref = 30"

Extras:
■ : Alt+254

*/
