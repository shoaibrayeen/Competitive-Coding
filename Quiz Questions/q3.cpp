#include <iostream>

int main() {
  int a = 10;
  int b = 20;
  int x;
  x = a, b;
  std::cout << x;
}

/*
	ouput :10
The comma operator has the lowest precedence of all C++ operators (specifically lower than =). 
In this example it separates the two expressions x = a and b.

First x = a is evaluated, setting x to 10.
Then, b is evaluated, which does nothing.
*/
