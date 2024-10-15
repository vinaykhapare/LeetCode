class Solution {
    #define ll long long 
public:
    long long minimumSteps(string s) {
        int n = s.size();
        ll total = 0;
        int left = 0;
        // find the all the occurance of 1
        while(left < n && s[left] != '1')
            left++;
        
        for(int i= left+1; i<n; i++)
        {
            if(s[i] == '0')
            {
                total += i - left;
                left ++;
            }
        }
        return total;
    }
};