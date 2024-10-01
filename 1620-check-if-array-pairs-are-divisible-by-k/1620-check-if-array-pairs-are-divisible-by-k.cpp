class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int,int> remainder;
        for(int i=0; i<arr.size(); i++)
        {
            int rem = arr[i] % k;
            if(rem < 0) rem +=k;

            remainder[rem]++;
        }

        for(auto& [rem,count] : remainder)
        {
            if(rem == 0)
            {
                if(count %2 != 0) return false;
            }
            else
            {
                int complement = k - rem;
                if(remainder[rem] != remainder[complement]) return false;
            }
        }
        return true;
    }
};