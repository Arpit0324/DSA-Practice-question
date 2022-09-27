bool search(vector<vector<int> > matrix, int n, int m, int x) 
{
    // code here
    int row=0;
    for(int i=0;i<n;i++){
        if(matrix[i][0] == x)
            return true;
        else if(matrix[i][0] > x)
        {
            row = i-1;  
            break;
        }else{
            row = i;
        }
    }
    
    if(row>=0){
        for(int i=0;i<m;i++){
            if(matrix[row][i] == x)
                return true;
        }
    }
    
    return false;
    
}




class Solution{
public:	
	int matSearch (vector <vector <int>> &a, int N, int M, int X)
	{
	    vector<int> ans;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            if(a[i][j]==X)
                return 1;
        }
    }
    return 0;
	}
};
