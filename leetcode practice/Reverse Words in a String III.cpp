// Q) Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.


class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        for(int j=0;j<s.size();j++){
            if(s[j]==' '){
                reverse(s.begin()+i, s.begin()+j);
              //when find a space just reverse the word;
                i=j+1; //update j pointer for next reversal
            }
        }
        reverse(s.begin()+i,s.end());  //explicitely reverse the last word,as the last word don't has ' '(space) in the end;
        return s;
    }
};
