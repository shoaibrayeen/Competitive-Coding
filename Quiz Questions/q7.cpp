#include <iostream>
using namespace std;

int foo() {
  cout << 1;
  return 1;
}

void bar(int i = foo()) {}

int main() {
  bar();
  bar();
}
/*
	output : 11

Is foo called both times or just once? The C++11 standard says this in §8.3.6¶9: "Default arguments are evaluated each time the function is called."

Thus, foo is called twice.
*/
