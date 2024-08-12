
  void perm(int pos,int n, vector<int> &arr, vector<vector<int>> &ans)
  {
      if(pos >= n)
    {
        ans.push_back(arr) ;
    }
    
    unordered_set<char> s ;
    for(int i = pos ; i < n ; i++)
    {
        if(s.find(arr[i])!=s.end()) continue ;

        s.insert(arr[i]) ;
        swap(arr[pos] , arr[i]) ;
        
        perm(pos + 1 ,n, arr , ans) ;
        

        swap(arr[i] , arr[pos]) ;
    }
    
  }
  
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        // code here
        vector<vector<int>> ans ;
        perm(0,n, arr,ans ) ;
        sort(ans.begin(),ans.end()) ;
        return ans  ;
        
    }