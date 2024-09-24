class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int digsum =0;
        int elesum =0; 
        for(int i=0; i<nums.size(); i++)
        {
            elesum += nums[i];
        }

        for(int num : nums)
        {
            while(num>0)
            {
                digsum +=num % 10;
                num /= 10;
            }
        }
        return abs(elesum - digsum);
    }
};