/*

You are given a 1D integer array B containing A integers.

Count the number of ways to split all the elements of the array into 3 contiguous parts so that the sum of elements in each part is the same.

Input 1:
 A = 5
 B = [1, 2, 3, 0, 3]

Output 1:
2

Input 2:
A = 4
B = [0, 1, -1, 0]

Output 2:
A = 4
B = [0, 1, -1, 0]


Time Complexity : O(n)
Space Complexity : O(n)


*/

int Solution::solve(int A, vector<int> &B) {
	int n=B.size();
	int sum=0;
	for(int i=0;i<n;i++)sum+=B[i];
	if(sum%3!=0)return 0;
	sum/=3;
	int s=0;
	int cnt[n];
	for(int i=0;i<n;i++)cnt[i]=0;
	for(int i=n-1;i>=0;i--){
		s+=B[i];
		if(s==sum)cnt[i]=1;
	}
	for(int i=n-2;i>=0;i--)cnt[i]+=cnt[i+1];
	s=0;
	int ans=0;
	for(int i=0;i<n-2;i++){
		s+=B[i];
		if(s==sum)ans+=cnt[i+2];
	}
	return ans;
}

