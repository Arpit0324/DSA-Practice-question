class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int i=0;
        int max = 0;
         
         for(i=0;i<n;i++){
             if(arr[i]>max)
             max=arr[i];
         }
         return max;
    }
};
