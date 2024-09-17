class Solution {
public:
    int strStr(string haystack, string needle) {
        int hay_len = haystack.size();
        int need_len = needle.size();
        if(need_len == 0) return 0;
        for(int i=0; i<=hay_len - need_len; i++)
        {
            if(haystack.substr(i, need_len) == needle)
            return i; 
        }
        return -1;
    }
};