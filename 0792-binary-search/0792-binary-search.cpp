class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        //Initialize everything
        int start =0;
        int end = nums.size()-1;
        int mid = start+ (end-start)/2;

        while(start<=end)
        {
            //Create a mid 
            int mid = start+ (end-start)/2;

            //Compare to target everytime
            if(nums[mid] == target)
            {
                return mid;
            }
            else if(nums[mid] < target)
            {
                start = mid+1;
            }
            else
            {
                end = mid-1;
            }
        }
        return -1;
    }
};