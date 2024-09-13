class Solution {
public:
    int mySqrt(int x) {
        if(x == 0 || x == 1)
            return x;
        
        int start = 0;
        int end = x;
        
        while(start <= end)
        {
            int mid = start + (end - start)/2;
            long ans = (long) mid * mid;
            if(ans == x)
            {
                return mid;
            }
            else if(ans > x)
            {
                end = mid -1;
            }
            else
            {
                start = mid+1;
            }
        }
        return end;
    }
};