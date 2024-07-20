class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> mpp ;
        mpp[0]=1 ;
        int prevsum =0 ;
        int cnt=0 ;
        for(int i=0;i<nums.size();i++)
        {
            prevsum += nums[i] ;
            int remove  = prevsum - k ;
            cnt += mpp[remove] ;
            mpp[prevsum] += 1 ;

        }
        return cnt ;
    }
};