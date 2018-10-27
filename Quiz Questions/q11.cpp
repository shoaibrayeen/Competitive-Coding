#include<iostream>

int foo()
{
  return 10;
}

struct foobar
{
  static int x;
  static int foo()
  {
    return 11;
  }
};

int foobar::x = foo();

int main()
{
    std::cout << foobar::x;
}


/*
  output : 11
  if a variable member of a namespace is defined outside of the scope of its namespace then any name that
  appears in the definition of the member after the declarator-id) is looked up as if the definition of
  the member occurred in its namespace..."

Using the class scope to specify the static member x changes the initial lookup-path for foo(). 
The scope at which x exists(that is, the enclosing namepsace where x was declared) is first searched 
before considering the surrounding namespaces.

*/
