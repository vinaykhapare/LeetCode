class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count = 0;
        for (auto ch : patterns) 
        {
            if (word.find(ch) != string::npos) 
            {
                count++;
            }
        }
        return count;
    }
};