class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res(numRows);

        res[0] = {1};
        for (int i = 1; i < numRows; i++)
        {
            vector<int> tmp(i + 1);
            tmp[0] = 1;
            tmp[i] = 1;
            for (int j = 1; j < i; j++)
            {
                tmp[j] = res[i - 1][j] + res[i - 1][j - 1];
            }
            res[i] = tmp;
        }
        return (res);
    }
};