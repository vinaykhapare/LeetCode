class Solution {
public:
    void findWords(string& s, vector<string>& words)
    {
        string word;
        for(int i=0; s[i] !='\0'; i++)
        {
            if(s[i] == ' ')
            {
                words.push_back(word);
                word = "";
            }
            else
            {
                word.push_back(s[i]);
            }
        }
        words.push_back(word);
    }
    bool areSentencesSimilar(string sentence1, string sentence2) 
    {
        vector<string> words1, words2;
        findWords(sentence1,words1);
        findWords(sentence2,words2);

        if(words1.size() > words2.size())
        {
            swap(words1, words2);
        }

        int left =0;
        while(left < words1.size() && words1[left] == words2[left])
        {
            left++;
        }
        int w1_right = words1.size() - 1; // Start from end of the words1
        int w2_right = words2.size() - 1; // Start from end of the Words2
        while(w1_right>= 0 && words1[w1_right] == words2[w2_right])
        {
            w1_right --;
            w2_right --;
        }
        // Return true if the overlapping words cover the entire smaller sentence
        return left > w1_right;
    }
};