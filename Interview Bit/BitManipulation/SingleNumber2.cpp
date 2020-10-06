/*

Given an array of integers, every element appears thrice except for one which occurs once.

Find that element which does not appear thrice.

Example Input 1:
    A = [1, 2, 4, 3, 3, 2, 2, 3, 1, 1]
Example Output 1:
    4
Explanation:
    4 occur exactly once
Example Input 2:
    A = [0, 0, 0, 1]
Example Output 2:
    1

*/


int Solution::singleNumber(const vector<int> &A) {
    int n=A.size();
    int ans=0;
    for(int i=0;i<32;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(A[j]&(1<<i))cnt++;
        }
        if(cnt%3)ans|=(1<<i);
    }
    return ans;
}

