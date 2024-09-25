class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num ==1 || num==0) return 1;

        for(long int i=1; i<num; i++)
        {
            if(i*i == num) return 1;

            if(i*i >  num) return 0; 
        }
        return 0;
    }
};