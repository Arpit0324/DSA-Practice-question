//You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.

//Return the single element that appears only once.


//Now in this left array, the first instance of every element is occurring on the even index and the second instance on the odd index. Similarly in the right array, the first instance of every element is occurring on the odd index and the second index is occurring on the even index.
// This is summarized below.
//So the algorithmic approach will be to use binary search. 
//The intuition is that when we see an element, if we know its index and whether it is the first instance or the second instance, we can decide whether we are presently in the left array or right array. 
//Moreover, we can decide which direction we need to move to find the breakpoint. We need to find this breakpoint between our left array and the right array.
//We will check our mid element, if it is in the left array, we will shrink our left array to the right of this mid element, if it is in the right array, we will shrink the right array to the left of this mid element.
// This binary search process will continue till the right array surpasses our left one and the low is pointing towards the breakpoint.


class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        int l = 0,r=nums.size()-1;
        while(l<=r){
            int m = l + (r-l)/2;
            if(m%2){
				// (even odd) i.e. we are on the left side of unique element--> go right
                if(nums[m-1]==nums[m])
                    l = m+1;
				// (even odd) pair violated, happens on the right side of unique element--> go left
                else{
                    r = m-1;
                }
            }else{
				// (even odd) i.e. we are on the left side of unique element--> go right
                if(nums[m]==nums[m+1]){
                    l = m+1;
				// (even odd) pair violated, happens on the right side of unique element--> go left
                }else{
                    r = m-1;
                }
            }
        }
        return nums[l];
    }
};