//Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.

//Each letter in magazine can only be used once in ransomNote
//We want to construct ransomNote from the magazine, soo each character of ransomNote should be in magazine, with freq greater than or equal to the freq of that character in ransomNote.

//Example :
//(1) ransomNote = "a", magazine = "b"
//We need 1 'a' but magazine don't have 'a' soo false.
//(2) ransomNote = "aa", magazine = "ab"
//We need 2 'a' but magazine only have 1 'a' soo false.
//(3) ransomNote = "aa", magazine = "aab"
//We need 2 'a' and magazine have 2 'a', no matter what else it has, soo True.

//So we just want :
//Freq of all char in ( ransomNote ) >= Freq of that char in ( magazine )
class Solution {
    
    
public:
   
        bool canConstruct(string ransomNote, string magazine) {
        
        int count[26] = {0};
        for(char ch : magazine)
            count[ch - 'a']++;
        
        for(char ch : ransomNote)
            if(count[ch - 'a']-- <= 0)
                return false;
        
        return true;
    
        
    }
};