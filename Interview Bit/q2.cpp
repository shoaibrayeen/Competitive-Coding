int gcd(int a, int b)
{
    if (b == 0)
       return a;
    return gcd(b, a%b);
}
int Solution::solve(int A, int B, int C, int D) {
    if(A==C) {
        return abs(B-D)-1;
    }
    if(B==D) {
        return abs(A-C)-1;
    }
    return (gcd(abs(B-D),abs(A-C))-1)*(gcd(abs(B-D),abs(A-C))-1);
}
