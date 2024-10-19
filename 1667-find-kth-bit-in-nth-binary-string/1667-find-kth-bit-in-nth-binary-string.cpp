class Solution {
public:
    char findKthBit(int n, int k) {
        if(n==1)    return '0';

        int sequence_size = 1<<n;
        if(k==sequence_size/2)
            return '1';
        else if(k<sequence_size/2)
            return findKthBit(n-1,k);
        else{
            char res=findKthBit(n-1,sequence_size-k);
            return res=='1'?'0':'1';
        }
    }
};