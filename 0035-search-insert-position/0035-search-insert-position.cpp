class Solution 
{
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        //Initialize the start and end position
        int start =0;
        int end = nums.size()-1;
        //use a binary Search
            while(start<=end)
            {
                int mid = start+(end - start)/2;
                if(nums[mid]==target)
                {
                    return mid;
                }
                else if(nums[mid]<target)
                {
                    start = mid +1;
                }
                else
                {
                    end = mid -1;
                }
            }
        //returning the start postion where we want to insert thae element
        return start;
    }
};