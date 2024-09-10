class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        //Create a vector ans
        vector<int> ans;
        for(int i =0; i<n; i++)
        {
            //push the first element
            ans.push_back(nums.at(i));
            //Push the seconfd element
            ans.push_back(nums.at(i+n));
        }
        return ans;
    }
};