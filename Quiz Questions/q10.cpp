#include <iostream>

int main() {
    int i=1;
    do {
        std::cout << i;
        i++;
        if(i < 3) continue;
    } while(false);
    return 0;
}

/*
  output : 1
  "The continue statement (...) causes control to pass to the loop-continuation portion of the smallest enclosing 
  iteration-statement, that is, to the end of the loop." (Not to the beginning.)
*/
