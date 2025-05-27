class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int res = 0;
        int tmp;
        for (int i = 0; i < colors.size() - 1; i++)
        {
            priority_queue <int, vector<int>, greater<int>> mh;
            while (i < colors.size() - 1 && colors[i] == colors[i + 1])
            {
                mh.push(neededTime[i]);
                i++;
            }
            if (i && colors[i] == colors[i - 1])
                mh.push(neededTime[i]);
            if (mh.empty())
                continue;
            tmp = mh.top();
            mh.pop();
            while (!mh.empty())
            {
                res += tmp;
                tmp = mh.top();
                mh.pop();
            }
        }
        return (res);
    }
};