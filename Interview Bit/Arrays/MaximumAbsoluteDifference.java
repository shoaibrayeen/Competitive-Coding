/*
   You are given an array of N integers, A1, A2 ,…, AN. Return maximum value of f(i, j) for all 1 ≤ i, j ≤ N.
   f(i, j) is defined as |A[i] - A[j]| + |i - j|, where |x| denotes absolute value of x.
   
   Time complexity : O(n)
   Space complexity : O(n)
*/

import java.util.*;

public class MaximumAbsoluteDifference {
	
	public static int maxArr(ArrayList<Integer> A) {
		int N = A.size();
		//array to store the value of A[i] + i
		int a[] = new int[N];  
		//array to store the value of A[i] - i
        int b[] = new int[N]; 
  
        for (int i=0; i<N; i++) { 
            a[i] = (A.get(i) + i); 
            b[i] = (A.get(i) - i); 
        } 
  
        int x = a[0];
        int y = a[0]; 
        //storing the max value in x and min value in y where index(i) is taken as positive
        //index is taken as positive
        for (int i=0; i<N; i++) { 
            if (a[i] > x) 
                x = a[i]; 
  
            if (a[i] < y) 
                y = a[i]; 
        } 
        int ans1 = (x - y); 
  
        x = b[0]; 
        y = b[0]; 
        //storing the max value in x and min value in y where index(i) is taken as negative
        //index is taken as negative
        for (int i=0; i<N; i++){ 
            if (b[i] > x) 
                x = b[i]; 
            
            if (b[i] < y) 
                y = b[i]; 
        } 
        int ans2 = (x - y); 
  
        //returning the maximum of both the results
        return Math.max(ans1, ans2); 
    }

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		System.out.print("Enter the size of Array : ");
		int N = s.nextInt();
		
		System.out.print("Enter the elements of Array : ");
		ArrayList<Integer> A = new ArrayList<>();
		for(int n=0; n<N; n++) {
			A.add(s.nextInt());
		}	
		
		//calling function 'maxArr()'
		int absDiff = maxArr(A);
		System.out.println(absDiff);
	}
	
}

/*
  EXAMPLE
  input : Enter the size of Array : 3
          Enter the elements of Array : 1 3 -1
  output : 5
  explanation :
  f(1, 1) = f(2, 2) = f(3, 3) = 0
  f(1, 2) = f(2, 1) = |1 - 3| + |1 - 2| = 3
  f(1, 3) = f(3, 1) = |1 - (-1)| + |1 - 3| = 4
  f(2, 3) = f(3, 2) = |3 - (-1)| + |2 - 3| = 5
*/
