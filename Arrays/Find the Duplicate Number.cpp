class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans = 0;
        unordered_map<int,int> mpp ;
        for(auto x : nums)
        mpp[x]++ ;

        for(auto x:mpp)
        {
            if(x.second>1) 
           ans = x.first ;
        }
    return ans ;
    }
};