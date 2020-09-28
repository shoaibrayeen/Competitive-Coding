/*  Given the array of strings A,
    you need to find the longest string S which is the prefix of ALL the strings in the array.

    Longest common prefix for a pair of strings S1 and S2 is the longest string S which is the prefix of both S1 and S2.

    For Example, longest common prefix of "abcdefgh" and "abcefgh" is "abc".
*/

import java.util.*;

public class LongestCommonPrefix {
	
	public static String longestCommonPrefix(ArrayList<String> A) {
        
        String CommonPrefix = "";
        int N = A.size();
    
        //minLength - length of shortest length string
        int minLength = Integer.MAX_VALUE;
        
        //finding the length of shortest string in the arraylist
        for(int i=0; i<N; i++){
            minLength = Integer.min(minLength, A.get(i).length());
        }
        
        //checking upto which length all strings are common
        for(int i=0; i<minLength; i++){
            char temp = A.get(0).charAt(i);
            for(int j=0; j<N; j++){
                if(A.get(j).charAt(i) != temp){
                    return CommonPrefix;
                }
            }
            CommonPrefix += temp;
        }
    
        return CommonPrefix;
    }

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		
		//Number of strings
		int N = s.nextInt();          
		
		//Arraylist to store all strings
		ArrayList<String> A = new ArrayList<>();
		for(int i=0; i<N; i++) {
			String str = s.next();
			A.add(str);
		}
		
		//calling longestCommonPrefix function and storing the result in CommonPrefix
		String CommonPrefix = longestCommonPrefix(A);
		
		System.out.println(CommonPrefix);
	}
	
}

/* EXAMPLE
   input : 3 
           abcdefga abfghijk abcefgh
   output : ab
*/
