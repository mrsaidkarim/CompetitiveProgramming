class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> min_heap;
        int maxval = INT_MIN;

        for(int i = 0; i < nums.size(); i++)
        {
            maxval = max(maxval, nums[i][0]);
            min_heap.push({nums[i][0], i, 0});
        }
        int res_left = 0;
        int res_right = INT_MAX;
        while (1)
        {
            auto curr = min_heap.top();
            int r = curr[1];
            int c = curr[2];
            min_heap.pop();
            if (res_right - res_left > maxval - curr[0])
            {
                res_right = maxval;
                res_left = curr[0];
            }
            if (c < nums[r].size() - 1)
            {
                min_heap.push({nums[r][c + 1], r, c+1});
                maxval = max(maxval, nums[r][c + 1]);
            }
            else
                break;
        }
        return {res_left, res_right};
    }
};