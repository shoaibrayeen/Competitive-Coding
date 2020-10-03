/*
  The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: 
  (you may want to display this pattern in a fixed font for better legibility)
*/

import java.util.*;

public class ZigZagString {
	
	public static String convert(String A, int B) {
		int N = A.length();
        
		//if only one row then that will be the original string	
		if(B == 1){
			return A;
		}
        
		//intializing the result
		String result = "";
        
		//array to store each row of the pattern
		String arr[] = new String[B];
		for(int i=0; i<B; i++){
			arr[i] = "";
		}
        
		int j = 0;
        
		//if true, move downwards
		//if false, move upwards
		boolean c = true;
		for(int i=0; i<N; i++){
			arr[j] += A.charAt(i);
			if(j == B-1){
				c = false;
			}else if(j == 0){
				c = true;
			}
          
			if(c){
				j++;
			}else{
				j--;
			}
		}
        
		//appending all the string to the resultant string
		for(int i=0; i<B; i++){
			result += arr[i];
		}
        
		return result;
	}

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		
		System.out.print("Enter the string : ");
		String A = s.next();
		
		System.out.print("Enter the number of rows : ");
		int B = s.nextInt();
		
		String result = convert(A, B);
		System.out.println("Converted string : " + result);
	}

}

/*
 EXAMPLE
 input : Enter the string : PAYPALISHIRING
         Enter the number of rows : 3
 output : Converted string : PAHNAPLSIIGYIR
 explanation : P.......A........H.......N            - PAHN
               ..A..P....L....S....I...I....G        - APLSIIG
               ....Y.........I........R              - YIR
*/
