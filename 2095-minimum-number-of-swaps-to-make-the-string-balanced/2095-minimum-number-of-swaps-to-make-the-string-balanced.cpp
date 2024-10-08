class Solution {
public:
    int minSwaps(string s) {
        int closing = 0;
        int max_closing = 0;
        for(int i=0; s[i] != '\0'; i++)
        {
            if(s[i] == '[')
                closing--;
            else closing++;
            max_closing = max(max_closing, closing);
        }
        return (max_closing + 1)/2;
    }
};