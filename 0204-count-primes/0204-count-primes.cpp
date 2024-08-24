class Solution {
public:
    int countPrimes(int n) 
    {
        int cnt =0;
        //Create a prime vector to store the prime count
        vector<bool> prime(n+1, true);
        //As default the 0 and 1 are not the prime this are ignored
        prime[0] = prime[1] = false;

        //Start the loop from the 2 and till the total number
        for(int i=2; i<n; i++)
        {
            //mark it prime
            if(prime[i])
            {
                cnt++;
                //Mark all the prime number multiplier as zero ie clear
                for(int j=2*i; j<n; j+=i)
                {
                    prime[j] =0;
                }
            }      
        }
        return cnt;
    }
};