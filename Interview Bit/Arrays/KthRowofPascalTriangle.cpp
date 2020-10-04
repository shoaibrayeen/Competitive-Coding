/* 

Given an index k, return the kth row of the Pascal’s triangle.

Pascal’s triangle : To generate A[C] in row R, sum up A’[C] and A’[C-1] from previous row R - 1.

Input : k = 3

Return : [1,3,3,1]

*/

vector<int> Solution::getRow(int A) {
    vector<int> v;
    if(A==0)return v;
    v.resize(A+1);
    for(int i=0;i<=A;i++){
        for(int j=i;j>=0;j--){
            if(j==0 || j==i)v[j]=1;
            else v[j]+=v[j-1];
        }
}

