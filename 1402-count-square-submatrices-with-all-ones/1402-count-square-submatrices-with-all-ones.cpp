class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();

        vector<vector<int>> maximal_square(m+1,vector<int>(n+1,0));
        int square_submatrices=0;
        for(int i=1;i<=m;++i){
            for(int j=1;j<=n;++j){
                if(matrix[i-1][j-1]==1){
                    maximal_square[i][j] = 1 + min({maximal_square[i-1][j], maximal_square[i][j-1], maximal_square[i-1][j-1]});
                    square_submatrices += maximal_square[i][j];
                }
            }
        }
        return square_submatrices;
    }
};