#include<iostream>
using namespace std;
int coin_change(int * S, int m , int n) {
   int i, j, x, y;
    int table[n+1][m];
    for (i=0; i<m; i++)
        table[0][i] = 1;
    for (i = 1; i < n+1; i++)
    {
        for (j = 0; j < m; j++)
        {
            x = (i-S[j] >= 0)? table[i - S[j]][j]: 0;
 
            // Count of solutions excluding S[j]
            y = (j >= 1)? table[i][j-1]: 0;
            table[i][j] = x + y;
        }
    }
    return table[n][m-1];
}
int main() {
    int n , m;
    int a[m];
    cin>>n;
    cin >>m;
    for(int i=0;i<m;i++) {
        cin>>a[i];
    }
    
    cout << coin_change(a,m,n) ;
	return 0;
}
