class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> s;

        for(int i = 0; i < 9; i++)
        {
            for(int j = 0; j < 9; j++)
            {
                int tmp = board[i][j];
                if (tmp != '.')
                    if (!s.insert(to_string(tmp) + " in row: " + to_string(i)).second
                        || !s.insert(to_string(tmp) + "in column: " + to_string(j)).second
                        || !s.insert(to_string(tmp) + "in box: " + to_string(i / 3) + "-" + to_string(j / 3)).second)
                        return (false);
            }
        }
        return (true);
    }
};