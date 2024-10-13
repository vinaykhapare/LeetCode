class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        int maxVal = INT_MIN;
        priority_queue<vector<int>, vector<vector<int>> ,greater<vector<int>>> minheap;
        int k = nums.size();
        for(int i=0; i<k; i++)
        {
            maxVal = max(maxVal, nums[i][0]);
            minheap.push({nums[i][0], i,0});
        }
        int min_L = 0;
        int max_R = INT_MAX;
        while(1)
        {
            auto curr = minheap.top();
            minheap.pop();
            int currVal = curr[0];
            int row = curr[1];
            int col = curr[2];

            if(max_R - min_L > maxVal - currVal)
            {
                min_L = currVal;
                max_R = maxVal;
            }

            if(col < nums[row].size() - 1)
            {
                minheap.push({nums[row][col+1],row, col+1});
                maxVal = max(maxVal, nums[row][col+1]);
            }
            else break;
        }
        return {min_L, max_R};
    }
};