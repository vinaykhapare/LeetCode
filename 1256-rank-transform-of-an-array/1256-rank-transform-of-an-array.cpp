class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        if(n==0) return {};

        //Create a Set to Avoid Duplicates
        set<int> uniqueElements(arr.begin(), arr.end());

        unordered_map<int, int> ranks;
        int rank =1;  //Ranks starts from 1

        for(const int &ele : uniqueElements)
            ranks[ele] = rank++;

        vector<int> ans;

        for(int &ele : arr)
            ans.push_back(ranks[ele]);

        return ans;
    }
};