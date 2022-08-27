///Given an unsorted array Arr of N positive and negative numbers. Your task is to create an array of alternate positive and negative numbers without changing the relative order of positive and negative numbers.
///Note: Array should start with positive number.


class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    vector<int>pos, neg;
	for(int i=0; i<n; i++)
	{
		if(arr[i]>=0)
	        pos.push_back(arr[i]);
	    else
	        neg.push_back(arr[i]);
	}
	
	int p=0, q=0, i=0;
	
    while(i<n)
    {
	   if(p<pos.size())
	       arr[i++]=pos[p++];
	   if(q<neg.size())
	       arr[i++]=neg[q++];
	}
	}
};

