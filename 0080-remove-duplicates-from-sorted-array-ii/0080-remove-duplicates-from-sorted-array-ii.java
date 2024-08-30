class Solution {
    public int removeDuplicates(int[] nums) {
        int n = nums.length;
        //Check if the length is less than 2 return as it is
        if(n<=2)
            return n;
        
        //We allow the two elements 
        int index =2;
        for(int i = 2;i<n; i++)
        {
            //Check if the currect elementn is not equal to less than two elements
            if(nums[i] != nums[index-2])
            {
                //put that value in the j
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }
}