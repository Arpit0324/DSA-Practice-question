///Explanation:
//Solution 01
//Type: Return n lines of Pascal Triangle.
//We took vector of vector ans of size n.
//As we know i-th row will have i+1 elements, so we resized the vector.
//Initialize the first and the last element of every vector with 1.
//In pascal triangle element of array[row][column] will be the sum of 2 elements of the previous row: array[row-1][column-1] & array[row-1][column].
// Time complexity: O(n^2).
//Similar type questions:
//Type 01
//Return an element of Pascal Triangle which row & column is given.
//Can be solved with a simple formula: (r-1)C(c-1).
//Time complexity: O(n).
///Type 02
//Return a specific row of the Pascal Triangle.
//Run loop & use the same formula of type 1.
//Edge cases: first and last element will be 1.
//Time complexity: O(n).


class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans(n);
        for(int i=0; i<n; i++){
            ans[i].resize(i+1);
            ans[i][0] = ans[i][i] = 1;
            
            for(int j=1; j<i; j++){
                ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
            }
        }
        return ans;
    }
};