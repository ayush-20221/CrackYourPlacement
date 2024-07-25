class Solution {
public:
    int calculate(string s) {
        int curr_num =0 ;
        int n = s.size() ;
        stack<int> st ;
        int result =0 ;
            char operation = '+' ;
        
        for(int i=0;i<n;i++)
        {
            char curr_char = s[i] ;
            if(isdigit(curr_char))
            curr_num = (curr_num*10) + (curr_char- '0') ;

            if(!isdigit(curr_char) && !iswspace(curr_char) || i==n-1)
            {
                if(operation=='-')
                {
                    st.push(-curr_num) ;
                }
                else if(operation=='+')
                {
                    st.push(curr_num) ;
                }
                else if(operation=='*')
                {
                    int ch = st.top() ;
                    st.pop() ;
                    st.push(ch*curr_num) ;
                }
                else if(operation=='/')
                {
                    int ch = st.top() ;
                    st.pop() ;
                    st.push(ch/curr_num) ;
                }
                operation = curr_char ;
                curr_num=0 ;
            }
        }

        while(!st.empty())
        {
            int ans = st.top() ;
            st.pop() ;
            result += ans  ;
        }
        return result  ;
    }
};