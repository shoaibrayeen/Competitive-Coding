#include<iostream>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a*b)/gcd(a, b);
}
int main() {
    int n;
    cin >>n;
    int a[n];
    for(int i =0;i<n;i++) {
        cin >>a[i];
    }
    int res = lcm(a[0],a[1]);
    for(int i =2;i<n;i++){
        a[i-1] = res;
        res = lcm(a[i-1],a[i]);
    }
    cout << res%1000000007;
	return 0;
}
