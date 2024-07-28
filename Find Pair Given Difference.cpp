 int findPair(int n, int x, vector<int> &arr) {
        // code here
        unordered_map<int,int> mpp ;
        for(auto it:arr)
        {
        mpp[it]++ ;
        if(x==0 && mpp[it]>1) return 1 ;
            
        }
        
        if(x==0) return -1 ;
        
        for(int i=0;i<n;i++)
        {
            if(mpp.find(arr[i]+x)!=mpp.end()) return 1 ;
        }
        return -1 ;
    }