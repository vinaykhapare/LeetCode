class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        for(int i =0; i<words.size(); i++)
        {
            //Here string::npos indicates not present element
            if(words[i].find(x) != string:: npos)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};