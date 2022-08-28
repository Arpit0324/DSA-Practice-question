//We divide the array into parts. It is done using two pointers, low and high, and dividing the range between them by 2. This gives the midpoint of the range. Check if the target is present in the midpoint, calculated before, of the array. If not present, check if the left half of the array is sorted. This implies that binary search can be applied in the left half of the array provided the target lies between the value range. Else check into the right half of the array. Repeat the above steps until low <= high. If low > high, indicates we have searched array and target is not present hence return -1. Thus, it makes search operations less as we check range first then perform searching in possible ranges which may have target value.
#include<bits/stdc++.h>

using namespace std;

int search(vector < int > & nums, int target) {
  int low = 0, high = nums.size() - 1; //<---step 1

  while (low <= high) { //<--- step 2
    int mid = (low + high) >> 1; //<----step 3
    if (nums[mid] == target)
      return mid; // <---step 4

    if (nums[low] <= nums[mid]) { //<---step 5
      if (nums[low] <= target && nums[mid] >= target)
        high = mid - 1; //<---step 6 
      else
        low = mid + 1; //<---step 7
    } else { //<---step 7
      if (nums[mid] <= target && target <= nums[high])
        low = mid + 1;
      else
        high = mid - 1;
    }
  }
  return -1; //<---step 8
}

int main() {
  vector<int> nums = {4,5,6,7,0,1,2,3};
  int target = 3;
  cout << "The index in which the target is present is " << search(nums, target);

  return 0;
}

//Time Complexity: O(log(N))

//g a binary search, this turns time complexity to O(log(N)) where N is the size of the array.

//Space Complexity: O(1)

//Reason: We do not use any extra data structure, this turns space complexity to O(1).