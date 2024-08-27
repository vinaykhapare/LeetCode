class Solution {
    public int searchInsert(int[] nums, int target) {
        for (int i = 0; i < nums.length; i++) {
    
    // If the current element is greater than or equal to the target, return its index
            if (nums[i] >= target) {
                return i;
            }
        }
        //return the length of the array means no element is greater or equal
        return nums.length;
    }
}
