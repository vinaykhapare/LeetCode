class Solution {
public:
    int romanToInt(string s) 
    {
        int ans = 0;
        int n = s.length();

        //Create unorederd hash map that declare the each interger its roman value
        unordered_map<char, int>romanVal = 
        {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        //create a for loop till the last element 
        for(int i=0; i<n; i++)
        {
            int value = romanVal[s[i]];

            //If the roman value is greater than the next one then minus that value
            if(i+1<n && romanVal[s[i+1]]>value)
            {
                ans -= value;
            }
            else
            {
                ans += value;
            }
        }
        return ans;
    }
};