class Solution {
public:
    string convertToTitle(int col) {
        string ans ;
        int result = 0 ;
        while(col>0){
            int x = (col-1)%26 ;
            ans.push_back((char)(x + 'A')) ;
            col = (col-1) / 26 ;
        }
        reverse(ans.begin(),ans.end()) ;
       return ans;

    }
};