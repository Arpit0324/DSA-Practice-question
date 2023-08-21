class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> mxl(100000, 0);
        vector<int> mxr(100000, 0);

        mxl[0] = height[0];
        for(int i = 1;i < height.size();i++){
            mxl[i] = max(mxl[i-1], height[i]); 
        }

        mxr[height.size()-1] = height[height.size()-1];
        for(int i = height.size()-2;i >= 0;i--){
            mxr[i] = max(mxr[i+1], height[i]);
        }

        int ans = 0;
        for(int i = 0;i <= height.size()-1;i++){
            int water = min(mxl[i], mxr[i]) - height[i];
            ans += water;
        }

        return ans;
    }
};
