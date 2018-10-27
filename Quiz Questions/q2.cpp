#include <iostream>

template <template <typename> class>
struct X {
  X() { std::cout << "1"; }
};

template <typename>
struct Y {};

template <typename T>
using Z = Y<T>;

template <>
struct X<Y> {
  X() { std::cout << "2"; }
};

int main() {
  X<Y> x1;
  X<Z> x2;
}
/* output : 21
X takes a template template parameter[1], meaning that any template argument for X needs to itself take a template parameter. For instance, you cannot do X<int>, but you can do X<Y>, since Y itself is a template. There are two definitions of X, first the general template one, then the specialization X<Y>.

Y is a normal template.

Z is a template alias declaration, meaning that Z is now an alias for Y (think of template aliases as a "typedef for templates").

Now let's look at main():
Defining a variable of type X<Y> uses that specialization (printing 2). But what happens when we use a template alias, as in X<Z>? Is the specialization X<Y> still used, since Z is an alias for Y?

No. According to §14.5.7¶1 in the standard, a template alias declaration resolve to a new family of types. The specialization cannot be used, and the first template delcaration is used instead, printing 1.

*/
