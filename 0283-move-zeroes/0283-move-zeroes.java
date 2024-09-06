class Solution {
    public void moveZeroes(int[] nums) {
        //Index which is traversing over each iteration
        int index =0;
        for(int i =0; i<nums.length; i++)
        {
            //Check the non zero values and swap with the next ones
            if(nums[i] != 0)
            {
                int temp = nums[i];
                nums[i] = nums[index];
                nums[index] = temp;
                index++;
            }
        } 
    }
}