class Solution {
public:
    bool isNumber(string s) {
        bool dseen=false, eseen=false, dotseen=false ;
        int cnt = 0;
        for(int i=0;i<s.size();i++)
        {
            char ch = s[i] ;

            if(isdigit(ch)) dseen=true  ;
             
            else if(ch=='+' || ch=='-')
            {
                if(cnt==2) return false ;

                if(i>0 && (s[i-1]!='e' && s[i-1]!='E')) return false  ;

                if(i==s.size()-1) return false  ;

                cnt++ ;
            }

            else if(ch=='.')
            {
                if(eseen || dotseen) return false  ;

                if(i==s.size()-1 && !dseen) return false  ;
                dotseen = true ;
            }

            else if(ch=='e' || ch=='E')
            {
                if(i==s.size()-1 || !dseen || eseen) return false  ;
                eseen = true ;
            }
            else 
            return false  ;
        }
        return true ;
    }
};