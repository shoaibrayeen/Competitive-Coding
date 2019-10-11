def max1( A , i , j):
        max2 = A[i]
        for k in range(i+1 , j):
            if max2 < A[k]:
                max2 = A[k]
        return max2
class Solution:
    # @param A : list of integers
    # @param B : list of integers
    # @return a list of integers
    def solve(self, A, B):
        list = []
        for i in range(len(A)+1):
            for j in range(i+1,len(A)+1):
                temp = max1(A,i,j)
                list.append(temp)
        for i in range(len(list)):
            c = list[i]
            p = 1
            for j in range(1,c):
                if c%j == 0:
                    p *=j
            list[i] =  (list[i]*p)%(1000000007)
        list = sorted(list , reverse=True)
        temp = len(list)
        list1 = list
        for i in range(0 ,len(B)):
            if B[i] < temp:
                list1.append(list[B[i]])
        return list1[temp:]
