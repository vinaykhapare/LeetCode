class Solution {

public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        //Check if the k =0  then remain as it is
        if(k == 0)
            return;
        //Reverse the all vector
        reverse(nums.begin(), nums.end());
        //Reverse the first reversed k elements
        reverse(nums.begin(), nums.begin()+k);
        //Reverse the last k elements from reversed 
        reverse(nums.begin()+k, nums.end());
    }
};