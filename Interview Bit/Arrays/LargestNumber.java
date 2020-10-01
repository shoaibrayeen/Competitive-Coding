/*
  Given a list of non negative integers, arrange them such that they form the largest number.
  
  Time complexity : O(n logn)   [Sorting performed on the list]
  Space complexity : O(n)       [Given list is final]
*/
import java.util.*;

public class LargestNumber {

	public static String largestNumber(final List<Integer> A) { 
		//as A is final list, we can't modify this. Create another list X and store elements in such a way that
		//if max("i1"+"i2", "i2"+"i1") will come first in the list
		ArrayList<Integer> X = new ArrayList<Integer>(A);
		X.sort(new Comparator<Integer>(){
			@Override
            public int compare(Integer i1, Integer i2) {
				return String.valueOf(i2 + "" + i1).compareTo(String.valueOf(i1 + "" + i2));
			}
		});
        
		//if the first element is zero that means all other elements int the list are also 0
        //so simply returns "0" 
        //"000000..." equivalent to "0"
		if (X.get(0) == 0) {
			return "0";
		}
        
		//appending the all elements in the output
		StringBuilder output = new StringBuilder();
		for (int i=0; i<X.size(); i++) {
			output.append(String.valueOf(X.get(i)));
		}
        
		//returning string value of output
		return output.toString();
	}
	
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		System.out.println("Enter the size of Array : ");
		int N = s.nextInt();
		
		List<Integer> A = new ArrayList<>();
		System.out.println("Enter the elements of Array : ");
		for(int n=0; n<N; n++) {
			A.add(s.nextInt());
		}
		
		//calling function 'largestNumber()'
		String result = largestNumber(A);
		System.out.println(result);
	}

}

/*
  EXAMPLE
  input : 5
          [3, 30, 34, 5, 9]
  output : 9534330
          (String)
*/
