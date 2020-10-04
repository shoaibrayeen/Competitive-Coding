/*
    Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases
    Example:

    "A man, a plan, a canal: Panama" is a palindrome.

    "race a car" is not a palindrome.

    Return 0 / 1 ( 0 for false, 1 for true ) for this problem
*/

import java.util.Scanner;

public class Solution {
    //function which check if a string is palindrome or not
    public int isPalindrome(String A) {
        int n=A.length();
        //2 pointer one from start and other from end
        int i=0,j=n-1;
        
        
        while(i<=j){
            Character chi=new Character(A.charAt(i));
            Character chj=new Character(A.charAt(j));
            
            //if char at i is a letter or a digit 
            if(Character.isLetter(chi)|| Character.isDigit(chi)){
            
                //if char at j is a letter or a digit
                if(Character.isLetter(chj)|| Character.isDigit(chj)){
                chi=Character.toLowerCase(chi);
                chj=Character.toLowerCase(chj);
                    if(chi!=chj){        // if not equal then string is not palindrome so return 0
                        return 0;
                    }
                    else{
                        i++;
                        j--;
                    }
                }
                
                //if char at j is not a letter or a digit
                else{
                    j--;
                }
            }
            //if char is not a letter or digit
            else{
                i++;
            }
            
        }
        //if we are able to come outside the while loop then it means that the string is palindrome
        return 1;
    }
    
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        String str = s.next();
        Solution sol = new Solution();
        int ispali = sol.isPalindrome(str);
        if(ispali == 0)
            System.out.println("String is not palindrome");
        else
            System.out.println("String is palindrome");
    }
    
}

/*
Example:

"A man, a plan, a canal: Panama" is a palindrome.

"race a car" is not a palindrome.

Return 0 / 1 ( 0 for false, 1 for true ) for this problem
*/
