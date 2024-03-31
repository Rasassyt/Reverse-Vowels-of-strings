class Solution {
public:
// condition for checking vowels
bool isvowels( char ch ){
    // for both cases types of vowels

    if (ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u'||ch == 'A'||ch == 'E'||ch == 'I'||ch == 'O'||ch == 'U')
        return true;  
    else return false;

    }
// declare the string
 string reverseVowels( string s ){
    
        int start =0;
        int end = s.size()-1;

        // the start index should be low than end
        while (start < end ){

            // untill start is pointing to vowel
            while( start < s.size() && !isvowels(s[start])){
                start++;
            }
            // untillend is pointing vowel
            while( end > 0 && !isvowels(s[end])){
                end--;
            }
            // while start < end ; swap
            if(start<end){
                swap(s[start++],s[end--]);
        }
        }
        // output
     return s;
}
};

