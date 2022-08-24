///PROBLEM DESCRIPTION:

This is also same as that two days back we solved power of 4.

APPROACH:
Only check whether the number is able to divisible by 3 or not and at the end return the condition if the number after going through loop is one or not. Simple maths it is that on dividing number is getting shorter and if still it is dividible means it is in power of 3.

for example: n = 81,

while(81%3 == 0) condition ✅
27 = 81/3
while(27%3 == 0) condition ✅
9 = 27/3
while(9%3 ==0) condition ✅
3 = 9/3
while(3%3 ==0) condition ✅
1 = 3/3
while(1%3 == 0) condition ❌
out of the loop

return n==1 ✅ ANSWER IS TRUE  ///

class Solution {

public:
    bool isPowerOfThree(int n) {
        if(n==0) return false;
        if(n==1) return true;
        
        while(n%3 ==0)
        {
            n /= 3;
        }
        
        return n==1;
    }
};