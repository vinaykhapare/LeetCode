class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<long long> maxheap(nums.begin(), nums.end());
        long long score = 0;
        while(k--)
        {
            long long curr = maxheap.top();
            maxheap.pop();
            score += curr;
            curr = ceil((double) curr/3);
            maxheap.push(curr);
        }
        return score;
    }
};