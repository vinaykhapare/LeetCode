class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        //create a two for loop to traverse through the array 
        //and the another for loop for the next element to compare with
        for(int i=0; i<nums.size()-1;i++)
        {
            for(int j=i+1; j<nums.size(); j++)
            {
                //check the addition is equal to the target element
                if(nums[i]+nums[j]==target)
                {
                    return {i,j};
                }
            }
        }  
        return {};
    }
};