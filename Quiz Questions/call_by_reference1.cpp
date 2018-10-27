#include <iostream>

int f(int &a, int &b) {
  a = 3;
  b = 4;
  return a + b;
}

int main() {
  int a = 1;
  int b = 2;
  int c = f(a, a);
  std::cout << a << b << c;
}


/*
  output : 428
  When f() is called with a as both parameters, both arguments refer to the same variable. 
  This is known as aliasing. First, a is set to 3, then a is set to 4, then 4+4 is returned. b is never modified.
  
*/
