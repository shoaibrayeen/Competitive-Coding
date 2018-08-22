- For a positive integer n let's define a function f: f(n) =  - 1 + 2 - 3 + .. + (( - 1)^n)*n.
  Your task is to calculate f(n) for a given integer n.
  **Input Format:** The first line contains an integer N , the no. of testcases .The next N lines contain the positive integer. Please note the value of N is large as given in constraints.
  **Constraints:** (1 ≤ n ≤ 10^18).
- Write a function which returns the GCD of N1 and N2. Print the value returned.
**Constraints:** 0 < N1 < 1000000000 , 0 < N2 < 1000000000
- There are N processes to be completed. All the processes have a unique number assigned to them from 1 to N.
Now, we are given two things:
**1)The calling order in which all the processes are called.
2)The ideal order in which all the processes should have been executed.**
Executing a process takes 1 unit of time. Changing the position takes 1 unit of time.
We have to find out the unit of time required to complete all the process such that a process is executed from the ideal order only when it exists at the same index in the calling order. We can push the first term from the calling order to the last thus rotating the order.
**Input Format:** A single number N
**Constraints:** N < 100
- We are given an array containg n numbers. All the numbers are present twice except for one number which is only present once. Find the unique number without taking any extra spaces and in linear time. 
- We are given an array containg n numbers. All the numbers are present twice except for two numbers which are present only once. Find the unique numbers in linear time without using any extra space.
- We are given an array containg n numbers. All the numbers are present thrice except for one number which is only present once. Find the unique number. Only use - bitwise operators, and no extra space.
- Cost of an array A, here, is the number of pairs i and j (i < j), such that Ai > Aj.
Determine the cost of the given array A of N elements. 
**Input Format:**
First line contains number of test cases, T. First line of each test case contains and integer N, denoting the number of elements int the array A. Second line of each test case contains N integers, denoting the elements of the array A.
**Constraints:
1<=T<=10
1<=N<=10^5
|Ai|<=10^9**

- Find the largest rectangular area possible in a given histogram where the largest rectangle can be made of a number of contiguous bars.

- The equilibrium price is the price at which the quantity demanded equals the quantity supplied. It is determined by the intersection of the demand and supply curves.
Demand and supply curve can be thought of as straight lines with quantity on x-axis and price on y-axis and given by, y=m1x + c1 and y=m2x + c2 respectively. Quantity demanded decreases with increase in price while quantity supplied increases with increase in price.
Determine whether it is possible to attain equilibrium or not. If possible output the equilibrium price.Otherwise, output -1.

- You are climbing up using stairs where a number is written on each stair. At each step we define the alpha score as sum of all the numbers previously seen on the stairs which are smaller than the present number. Alpha score of the whole journey is defined as the sum of all the alpha scores at each step. Print the alpha score of whole journey modulus 1000000007.

- You are given a text and a wildcard pattern. A text contains lowercase English letters only. A wildcard pattern can contain, along with lowercase English letters, '?' and '*' characters.

'?' matches any single character. For example, Text = "aaba" and Pattern = "aa?a", then they are matched.
' * ' matches any subsegment of characters(including empty sub-segment). For example, Text = "aaba" and Pattern = "a*", then they are matched. Find out if the pattern and text matches or not.

- Given a number n, F(n) is defined as the number of solutions of the equation: x + y + z = n
such that
1) x, y, z >= 0
2) (x & y & z) > 0 where & is bitwise AND
Output the answer F(n) Modulo 1000000007.
- You are given N elements, a1,a2,a3….aN. Find the number of good sub-arrays.
**A good sub-array is a sub-array [ai,ai+1,ai+2….aj] such that (ai+ai+1+ai+2+….+aj) is divisible by N.**
- Given a value N, if we want to make change for N cents, and we have infinite supply of each of S = { S1, S2, .. , Sm} valued coins, In how many ways can we make the change? The order of coins doesn’t matter.

- **A group of N friends want to have a photograph in which all of them jump at the same moment of time**
They hire a photographer for this purpose. At the time of photograph, they all jump at the same time. Unfortunately, the photographer fails to capture this picture. So he asks the group to keep jumping, till the time comes when all them jumps at the same moment of time. ith friend jumps after exactly Ai seconds from the previous jump. So the ith friend jumps at seconds, 0, Ai, 2Ai, 3Ai,… and so on. Find the time needed to capture this picture after the first jump.
As the answer can be large, print the answer modulo 1000000007.
