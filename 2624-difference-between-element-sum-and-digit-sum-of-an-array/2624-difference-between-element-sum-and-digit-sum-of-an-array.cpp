class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elesum =0, digsum =0;
        for(int num : nums)
        {
            elesum +=num;
            int temp = num;

            while(temp > 0)
            {
                digsum += temp % 10;
                temp /=10;
            }
        }
        return abs(elesum - digsum);
    }
};