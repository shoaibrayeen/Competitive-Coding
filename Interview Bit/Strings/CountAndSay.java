/* The count-and-say sequence is the sequence of integers beginning as follows:

    1, 11, 21, 1211, 111221, ...
    >> 1 is read off as one 1 or 11.
    >> 11 is read off as two 1s or 21.
    >> 21 is read off as one 2, then one 1 or 1211.

    Given an integer n, generate the nth sequence.
*/

import java.util.*;

public class CountAndSay {
	
	 public static String countAndSay(int N) {
		 
		 String s = "";
		 //first term of pattern (N = 1)
		 s += '1';
	       
		 //creating all sequence using previous it's sequence term
		 for(int i=2; i<=N; i++){
			 //generating new string p using string s
			 String p = "";
			 int j = 0;
			 
			 //traversing s for generating p - (s:previous string, p:new string)
			 while(j < s.length()){
				 char c = s.charAt(j);
				 int count = 1;
				 j++;
				 //counting the characters until same
				 while(j < s.length() && s.charAt(j) == c){
					 count++;
					 j++;
				 }
				 //counts and say
				 p += String.valueOf(count) + c;
			 }
			 //now p will be the previous term for a new term
			 s = p;
		 }
		 
		 return s;
	 }

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int N = s.nextInt();
		
		String result = countAndSay(N);
		System.out.println(result);
	}

}

/* EXAMPLES
   input : 4
   output : 1211
   input : 10
   output : 13211311123113112211
*/
