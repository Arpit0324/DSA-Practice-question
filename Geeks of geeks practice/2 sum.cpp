// Q) Given two unsorted arrays A of size N and B of size M of distinct elements, 
//the task is to find all pairs from both arrays whose sum is equal to X.





class Solution{
    public:
    vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
       vector<pair<int,int>> ans;
        sort(A,A+N);
        sort(B,B+M,greater<int>());
        int i=0,j=0;
        while(i<N && j<M){
         if(A[i]+B[j]==X){
             ans.push_back({A[i],B[j]});
             i++;
             j++;
         }else if(A[i]+B[j]<X) i++;
         else j++;
        }
        return ans;
        
    }
};
