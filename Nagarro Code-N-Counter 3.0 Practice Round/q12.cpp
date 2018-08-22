#include <iostream>
#include<math.h>
using namespace std;
int main() {
    long long n;
    cin >> n;
    int result = 0;
    for (int i=1; i<=n; i++)
      for (int j=1; j<=n-i; j++)
          for (int k=1; k<=(n-i-j); k++)
             if ( (i + j + k == n) && ((i&j&k) > 0))
              result++;
    cout << result%1000000007;
    return 0;
}
