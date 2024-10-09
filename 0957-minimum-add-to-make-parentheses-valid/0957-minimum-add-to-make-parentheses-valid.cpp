class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int count =0;
        for(auto c : s)
        {
            if(c == '(')
            {
                st.push(c);
            }
            else if(c == ')')
            {
                if(!st.empty() && st.top()== '(')
                {
                    st.pop();
                }
                else
                {
                    count++;
                }
            }
        }
        return st.size() + count;
    }
};