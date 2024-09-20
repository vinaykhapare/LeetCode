class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n = 0;
        for(int i=0; i<sentences.size(); i++)
        {
            int sum =1;
            for(int j=0; j<sentences[i].size(); j++)
            {
                if(sentences[i][j] == ' ')
                {
                    sum+=1;
                }
            }
            n = max(n, sum);
        }
        return n;
    }
};