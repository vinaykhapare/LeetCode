class Solution {
    public int removeDuplicates(int[] nums) {
        //index value in the array
        int index = 1;
        for(int i=1; i<nums.length; i++)
        {
            //Checking the value is unique or not
            if(nums[i] != nums[i-1])
            {
                //putting the unique value in the index 
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }
}