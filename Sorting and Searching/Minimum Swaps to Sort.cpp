void swap(vector<int>&nums,int i, int j)
    {
        int temp = nums[i] ;
        nums[i] = nums[j] ;
        nums[j] = temp ;
    }
	int minSwaps(vector<int>&nums)
	{
	    // Code here
	    int n = nums.size() ;
	    int ans=0 ;
	    vector<int> temp=nums ;
	    sort(temp.begin(),temp.end()) ;
	    unordered_map<int,int> mpp ;
	    
	    for(int i=0;i<n;i++)
	    {
	        mpp[nums[i]] = i ;
	    }
	    
	    
	      for(int i=0;i<n;i++)
	    {
	       if(nums[i]!=temp[i])
	       {
	           ans++;
	           int x = nums[i] ;
	           swap(nums,i,mpp[temp[i]]) ;
	           mpp[x] = mpp[temp[i]] ;
	           mpp[temp[i]] = i ;
	           
	           
	       }
	    }
	    return ans ;
	    
	    
	}