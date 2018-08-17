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
