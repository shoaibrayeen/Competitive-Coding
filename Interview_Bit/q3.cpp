int gcd(int a, int b)
{
    if (a == b)
        return a;
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
int lcm(int a, int b)
{
    return (a*b)/gcd(a, b);
}
 
int Solution::solve(int A, int B, int C) {
    int in =lcm(B,C);
    int i=in;
    int res =0;
    while(i<=A) {
        if(i%in == 0) {
            res++;
        }
        i += in;
    }
    return res;
}
