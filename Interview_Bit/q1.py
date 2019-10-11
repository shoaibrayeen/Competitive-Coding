def prime(n):
    import math
    if n < 0 or n == 1:
        return 0
    elif n == 2 or n == 3:
        return 1
    else:
        for i in range (2,int(math.sqrt(n))+1):
            if n%i == 0:
                return 0
        return 1
        
class Solution:
    # @param A : list of integers
    # @return an integer
    def solve(self, A):
        res = 0
        for i in range(len(A)+1):
            for j in range(i+1,len(A)+1):
                sum = 0
                for k in range(i,j):
                    sum += A[k]
                if prime(sum) == 1:
                    res = res + 1
        return res
        
