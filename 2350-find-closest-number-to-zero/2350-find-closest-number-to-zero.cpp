class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int result = INT_MAX;
        for(int i : nums)
        {
            if(abs(i) < abs(result) || i == abs(result))
            {
                result = i;
            }
        }
        return result;
    }
};