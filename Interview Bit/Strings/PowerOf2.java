/*
 Find if Given number is power of 2 or not.
 More specifically, find if given number can be expressed as 2^k where k >= 1.
*/

import java.util.*;

public class PowerOf2 {
	
	public static int power(String A) {
		int N = A.length();
		
		//if there is only one element '1'
		if(N == 1 && A.charAt(0) == '1'){
			return 0;
		}
        
		//storing binary number in the list 
		ArrayList<Integer> a = new ArrayList<Integer>();
        
		for(int i=0; i<N; i++){
			int n = Integer.valueOf(String.valueOf(A.charAt(i)));
			a.add(n);
		}
        
		int count = 0;
    
		//There is no shortcut to this problem.
		//We need to divide the number by 2 till it is greater than 1.
		//At any point, if the last digit is odd, then the number is not a power of 2.
		ArrayList<Integer> b = new ArrayList<>();
		
		//true if previous result is in list 'a'
		//false if previous result is in list 'b'
		boolean x = true;
        
		while((x && a.size() > 0) || (!x && b.size() > 0)){
			//if the previous result is in list 'a'
			//we will divide this by 2 and store the result in list 'b'
			if(x){
                if(a.size() == 1 && a.get(0) == 0){
                	break;
                }
                int i=0;
                int rem = 0;
                while(i < a.size()){
                	int div = rem*10 + a.get(i);
                	if(b.size() != 0 || div/2 != 0){
                		b.add(div/2);
                	}
                	rem = div%2;
                	i++;
                }
                if(rem == 1){
                	count++;
                	if(count > 1){
                		return 0;
                	}
                }
                a.clear();
                x = false;
			}
			//if the previous result is in list 'b'
			//we will divide this by 2 and store the result in list 'a'
			else{
				if(b.size() == 1 && b.get(0) == 0){
					break;
				}
                
				int i=0;
				int rem = 0;
				while(i < b.size()){
					int div = rem*10 + b.get(i);
					if(a.size() != 0 || div/2 != 0){
						a.add(div/2);
					}
					rem = div%2;
					i++;
				}
				if(rem == 1){
					count++;
					if(count > 1){
						return 0;
					}
				}
				b.clear();
				x = true;
			}
		}
        
		return 1;
	}

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		System.out.print("Enter a binary string : ");
		String A = s.next();
		
		int result = power(A);
		if(result == 1) {
			System.out.println("Yes, the given binary string is power of 2");
		}else {
			System.out.println("No, the given binary string is not power of 2");
		}
	}

}

/*
  EXAMPLE
  input : Enter a binary string : 128
  ouput : Yes, the given binary string is power of 2
*/
