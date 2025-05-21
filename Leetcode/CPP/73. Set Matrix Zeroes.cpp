class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<int> l(m, 1), c(n, 1);

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == 0)
                {
                    l[i] = 0;
                    c[j] = 0;
                }
            }
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (l[i] == 0)
                    matrix[i][j] = 0;
                else if (c[j] == 0)
                    matrix[i][j] = 0;
            }
        }
       
    }
};