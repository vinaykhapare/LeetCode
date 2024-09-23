class Solution {
public:
    vector<string> cellsInRange(string s) {
        char startCol = s[0];
        char endCol = s[3];
        int startRow = s[1] -'0';
        int endRow = s[4] - '0';

        vector<string> cell;

        for(char col = startCol; col<=endCol; col++)
        {
            for(int row = startRow; row<= endRow; row++)
            {
                cell.push_back(string(1,col) + to_string(row));
            }
        }
        return cell;
    }
};
