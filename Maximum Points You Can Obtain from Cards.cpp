class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int lsum=0,rsum=0,maxsum=0 ;
        for(int i=0;i<k;i++)
        {
            lsum += nums[i] ;
        }
        maxsum = lsum ;
        int rindex = nums.size()-1 ;
        for(int i=k-1;i>=0;i--)
        {
            lsum = lsum - nums[i] ;
            rsum = rsum + nums[rindex] ;
            rindex = rindex-1 ;
            maxsum = max(maxsum,lsum+rsum) ;
        }
        return maxsum ;

    }
};