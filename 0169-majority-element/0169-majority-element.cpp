class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        //Soprt the elements
        sort(nums.begin(), nums.end());
        int n = nums.size();
        //As per the condition return the n/2 time repeated value
        return nums[n/2];   
    }
};