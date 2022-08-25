//Given two unsorted arrays arr1[] and arr2[]. They may contain duplicates. For each element in arr1[] count elements less than or equal to it in array arr2[].//
class Solution{
  public:
    vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                                 int m, int n)
    {
    //Your code goes here
     sort(arr2,arr2+n);
       vector<int>v(m);
       for(int i=0;i<m;i++)
       {
           auto it=upper_bound(arr2,arr2+n,arr1[i]);
           v[i]=it-arr2;
       }
       return v;
    }
};