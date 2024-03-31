# Reverse-Vowels-of-strings
Leetcode problem / 345 / easy
Given a string s, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

 

Example 1:

Input: s = "hello"
Output: "holle"

Example 2:

Input: s = "leetcode"
Output: "leotcede"

 

Constraints:

    1 <= s.length <= 3 * 105
    s consist of printable ASCII characters.





class Solution {
public:
    bool isvowel(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A'|| ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
            return true;
        else return false;
    }
    
    string reverseVowels(string s) {
        int start =0;
        int end = s.size()-1;
        
        while(start<end){
            // until start is pointing to consonent.
            while(start<s.size() && !isvowel(s[start]) ){
                start++;
            }
            
            // until end is pointing to the consonent.
            while( end>=0 && !isvowel(s[end]) ){
                end--;
            }
            // if start<end swap. and increment the start while decrement the end.
            if(start<end){
                swap(s[start++],s[end--]);
            }
        }
        return s;
    }
};
