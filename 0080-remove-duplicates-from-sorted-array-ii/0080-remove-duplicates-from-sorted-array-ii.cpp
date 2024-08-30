class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        //Check if the length is two or less
        if(n<=2)
            return n;
        //create a index equal to 2
        int index =2;
        for(int i=2; i<n; i++)
        {
            if(nums[i] != nums[index-2])
            {
                //ASsign the value in the index
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }
};