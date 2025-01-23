class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int res = 0;
        vector<int> row_count(grid.size(), 0);
        vector<int> column_count(grid[0].size(), 0);
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[i].size(); j++)
            {
                row_count[i] += grid[i][j];
                column_count[j] += grid[i][j];
            }
        }
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[i].size(); j++)
                if (grid[i][j] == 1 && max(row_count[i], column_count[j]) > 1)
                    res++;
        }
        return (res);
    }
};