class Solution {
public:
    int minLength(string s) {
        stack<char> stack;
        for(int i =0; i<s.length(); i++)
        {  
           char curr_char = s[i];

           if(stack.empty())
           {
                stack.push(curr_char);
                continue;
           }
           if(curr_char == 'B' && stack.top() == 'A')
           {
                stack.pop();
           }
           else if(curr_char == 'D' && stack.top() == 'C')
           {
                stack.pop();
           }
           else
           {
                stack.push(curr_char);
           }
        }
        return stack.size();
    }
};