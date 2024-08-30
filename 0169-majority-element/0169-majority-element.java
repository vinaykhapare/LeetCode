class Solution {
    public int majorityElement(int[] nums) {
        int count = 0;
        int candidate = 0;

        //Iterate through the nums array
        for(int num: nums)
        {
            //if the array is empty then put the num value in the candidate value
            if(count == 0)
            {
                candidate = num;
            }
            //Check the value of the num if it is equal then increament the count not then decreament 
            if(num == candidate)
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        return candidate;
    }
}