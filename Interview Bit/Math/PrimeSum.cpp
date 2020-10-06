/*

Given an even number ( greater than 2 ), return two prime numbers whose sum will be equal to given number.

Input : 4
Output: 2 + 2 = 4

*/



vector<int> Solution::primesum(int A) {
    vector<bool> primes;
    primes.resize(A+1);
    for(int i=0;i<=A;i++)primes[i]=1;
    primes[0]=primes[1]=0;
    for(int i=2;i*i<=A;i++){
        if(primes[i]==1){
            for(int j=i*i;j<=A;j+=i)
                primes[j]=0;
        }
    }
    vector<int> v;
    for(int i=2;i<=A;i++){
        int temp=A-i;
        if(primes[i] && primes[temp]==1){
            v.push_back(i);
            v.push_back(temp);
            return v;
        }
    }
    return v;
}
