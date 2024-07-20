class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans ;
        int n = matrix.size() ;
        int m = matrix[0].size();
        int minr=0,minc=0,maxr=n-1,maxc=m-1 ;
        int t = n*m,cnt=0 ;
        while(cnt<t)
        {
            //top wall
            for(int j=minc;j<=maxc && cnt<t ;j++)
        {    ans.push_back(matrix[minr][j]) ;
            cnt++ ;}
            minr++;
            //right wall
               for(int i=minr;i<=maxr && cnt<t;i++)
           { ans.push_back(matrix[i][maxc]) ;
            cnt++ ;}
            maxc--;
            //bottom wall
               for(int j=maxc;j>=minc && cnt<t;j--)
            {ans.push_back(matrix[maxr][j]) ;
            cnt++ ;}
            maxr--;

            //left wall
            for(int i=maxr;i>=minr && cnt<t;i--)
            {ans.push_back(matrix[i][minc]) ;
            cnt++ ;}
            minc++;


        }
        return ans ;
    }
};