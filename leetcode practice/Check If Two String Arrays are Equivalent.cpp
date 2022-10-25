class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        auto w1=reduce(word1.begin(),word1.end());
        auto w2=reduce(word2.begin(),word2.end());
        return (w1==w2);
    }
};




class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1,s2;                                    // CREATE AN EMPTY STRING TO CONTAIN CONCATENATION OF BOTH THE ARRAYS
        for (int i=0; i<word1.size();i++)s1+=word1[i];   // ADD THE ALPHABETS OF FIRST VECTOR INTO THE STRING
        for (int i=0; i<word2.size();i++)s2+=word2[i];   // ADD THE ALPHABETS OF SECOND VECTOR INTO THE STRING
        if(s1==s2)return true;                           // IF THE STRING AFTER CONCATENATION IS EQUAL THEN RETURN TRUE;
		return false;                                    // ELSE RETURN FALSE
    }
};


class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        // concatenate all the words of word1
        
        string res1 = "";
        
        for(auto word : word1)
        {
            res1 += word;
        }
        
        // concatenate all the words of word2
        
        string res2 = "";
        
        for(auto word : word2)
        {
            res2 += word;
        }
        
        return res1 == res2;
    }
};
