class Solution {
    public int majorityElement(int[] nums) {
        //Sort the array 
        Arrays.sort(nums);
        int n = nums.length;
        //return the number came n/2 times
        return nums[n/2];
    }
}