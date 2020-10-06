/*

A robot is located at the top-left corner of an A x B grid 
The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (marked ‘Finish’ in the diagram below).

How many possible unique paths are there?

Input : A = 2, B = 2
Output : 2

2 possible routes : (0, 0) -> (0, 1) -> (1, 1) 
              OR  : (0, 0) -> (1, 0) -> (1, 1)


*/




int Solution::uniquePaths(int A, int B) {
    int a[A][B];
    for(int i=0;i<A;i++)for(int j=0;j<B;j++)a[i][j]=0;
    for(int i=0;i<A;i++){
        for(int j=0;j<B;j++){
            if(i==0 || j==0)a[i][j]=1;
            else{
                a[i][j]=a[i-1][j]+a[i][j-1];
            }
        }   
    }
    return a[A-1][B-1];
}
