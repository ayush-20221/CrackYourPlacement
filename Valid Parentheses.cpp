class Solution {
public:
    bool isValid(string s) {
        stack<char> st ;
        for(auto x:s)
        {
            if(x=='(' || x=='[' || x=='{') st.push(x) ;
            else
            {
                if(st.empty()) return false ;
                char ch = st.top();
                st.pop();
            if((x==')' && ch!='(') || (x=='}' && ch!='{') || (x==']' && ch!='['))
            return false ;
            }
        }
      
        return st.empty() ;
    }
};