class Solution {
public:
    int maxRemoval(vector<int>& nums, vector<vector<int>>& queries) {
        sort(queries.begin(), queries.end());
        priority_queue<int> available_queries;
        priority_queue<int, vector<int>, greater<int>> used_queries;
        int tmp;
        int queries_needed = 0;
        int pos = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            while (pos < queries.size() && queries[pos][0] == i)
                available_queries.push(queries[pos++][1]);
            tmp = nums[i] - used_queries.size();
            while (tmp > 0 && !available_queries.empty() && available_queries.top() >= i)
            {
                used_queries.push(available_queries.top());
                available_queries.pop();
                tmp--;
                queries_needed++;
            }
            if (tmp > 0)
                return (-1);
            while (!used_queries.empty() && used_queries.top() == i)
                used_queries.pop();
        }
        return (queries.size() - queries_needed);
    }
};