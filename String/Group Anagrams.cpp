class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans ;
        unordered_map<string,vector<string>> mpp ;
        for(auto x:strs)
        {
            string t= x ;
            sort(x.begin(),x.end()) ;
            mpp[x].push_back(t) ;
        }
        for(auto x:mpp)
        {
            vector<string> temp = x.second ;
            ans.push_back(temp) ;
        }
        return ans ;
    }
};