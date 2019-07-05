#include <iostream>
using namespace std;

int main() {
	 int sieve[1000009];
    sieve[0]=0, sieve[1]=0;
    for(long int i=2;i<1000009;i++)
        sieve[i]=1;
        
    for(long long int i=2;i*i<1000009;i++)
    {
        for(long long int j=i;j*i<1000009;j++)
        {
            sieve[i*j]=0;
        }
    }
    
    int pre_sum[1000009];
    for(int i=0;i<1000009;i++)
        pre_sum[i]=sieve[i];
    
    for(int i=1;i<1000009;i++)
        pre_sum[i]=pre_sum[i]+pre_sum[i-1];
    
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int l,r;
        scanf("%d %d",&l,&r);
        int prime=pre_sum[r]-pre_sum[l-1];
        int comp=r-l+1-prime;
        if(l==1)
            comp-=1;
        long int ans=prime*comp;
        printf("%ld\n",ans);
    }
}
