// Q) Given a positive integer n, return the smallest positive integer that is a multiple of both 2 and n.

class Solution {
public:
    int smallestEvenMultiple(int n) {
        int ans = 1;
        if(n%2 == 0) return n;  
// if n is multiple of 2 it means it will also the multiple of n so return n
        else
        {
            ans = n*2;  
                               // if it is not multiple of 2 then multiply it with 2 and return so it will become multiple of 2 as well
        }
        return ans ;
    }
};

