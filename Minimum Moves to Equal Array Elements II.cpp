class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int len = nums.size(),sum=0 ;
        sort(nums.begin(),nums.end()) ;
        int m = nums[len/2] ;
        for(auto x:nums)
        sum += abs(m-x) ;
        return sum ;
    }
};