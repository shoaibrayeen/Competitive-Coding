#include <iostream>
using namespace std;

class A
{
public:
    int x;
	  A() { cout << "A's Constructor Called " << endl; }
};

class B
{
    
public:
    static A a;
	B() { cout << "B's Constructor Called " << endl; }
}
;
A B::a;

int main()
{
	B b;
 	cout << B::a.x;
	return 0;
}

/* Ouput :
A's Constructor Called 

B's Constructor Called 

0
*/
