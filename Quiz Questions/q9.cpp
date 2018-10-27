#include <iostream>

template <class T> void f(T &i) { std::cout << 1; }

template <> void f(const int &i) { std::cout << 2; }

int main() {
  int i = 42;
  f(i);
}


/*
  output : 1
  The templated function will be instantiated as void f(int&), which is a better match than f(const int&).
 */
