class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        vector<int> t(1e6 + 4, 0);
        int index = 0;
        for (auto &inter : intervals)
        {
            t[inter[0]]++;
            t[inter[1] + 1]--;
        }
        int tmp = 0, res = 0;
        for (int i = 0; i < 1e6 + 4; i++)
        {
            tmp += t[i];
            if (tmp > res)
                res = tmp;
        }
        return (res);
    }
};