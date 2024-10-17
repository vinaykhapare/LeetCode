class Solution {
public:
    int maximumSwap(int num) {
        if(num == 3) return num;
        string digits = to_string(num);
        int n = digits.size();

        int maxval_idx = n -1;
        int left = -1;
        int right = n-1;

        for(int i=n-2; i>=0; --i)
        {
            if(digits[maxval_idx] < digits[i])
            {
                maxval_idx = i;
            }
            else if(digits[maxval_idx] > digits[i])
            {
                right = maxval_idx;
                left = i;
            } 
        }
        if(left != -1)
            swap(digits[left], digits[right]);
        return stoi(digits);
    }
};